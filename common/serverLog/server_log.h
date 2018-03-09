#ifndef SERVER_LOG_H
#define SERVER_LOG_H
#include <queue>
#include "../baselib/kafka_produce.h"
#include "../baselib/thread.h"
#include "../xRedis/xLock.h"
#include "../bid_conf.h"
#include "bid_info.pb.h"
#include "detail_info.pb.h"


using namespace com::pxene::proto;
using namespace std;

class ServerLog : public Thread
{
public:
	bool Init(const BidConf &conf, bool *run_flag);
	void AddLog(const DetailReqMessage &detail);
	void AddLog(const BidReqMessage &bidReq);

protected:
	virtual void run();
	bool SendLog(const DetailReqMessage &detail);
	bool SendLog(const BidReqMessage &bidReq);

protected:
	bool _do_detail;
	BidConf::LogServer _bid_conf;
	BidConf::LogServer _detail_conf;
	ProducerKafka _kafka_bid;
	ProducerKafka _kafka_detail;

	xLock _lock_bid;
	xLock _lock_detail;

	queue<BidReqMessage> _msg_bid;
	queue<DetailReqMessage> _msg_detail;

	bool *_run_flag;
};

// ��protobufʹ��DebugStringתΪ���Ķ����ݺ�����Ϊʮ���ƣ�
// �˺�����������ԭ���nbrֵתΪʮ�����Ʒ�ʽ��ʾ�������ײ鿴������
void TransErrcodeHex(string &msg);

#endif