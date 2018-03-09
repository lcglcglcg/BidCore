#include <string>
#include <iostream>
#include "../../common/type.h"
#include "../../common/local_log.h"
#include "gdt_bid.h"
#include "gdt_context.h"

using namespace std;


BidContext *g_context = NULL;


int main()
{
	cout << "gdt fast cgi start\n";
	g_context = new GdtContext;
	if (!g_context->Init(PRIVATE_CONF))
	{
		cout << "g_context->Init failed\n";
		return 1;
	}

	g_context->StartWork();
	g_context->Monitor();

	cout << "g_context->Uninit()" << endl;
	g_context->Uninit();
	cout << "end\n";
	return 0;
}
