#ifndef URL_ENDECODE_H
#define URL_ENDECODE_H
#include <string>
using std::string;
// url endode,return the encode string
char *urlencode(char const *s, int len, int *new_length);
// url decode,the decode string is stored in the str
int urldecode(char *str, int len);

string urlencode(const string &str);
#endif
