#include "base64.h"
#include <iostream>
using namespace std;

int main()
{
	char str[1024] = "mx";
	char outputStr[1024] = {0};
	base64Encode(str,outputStr);
	cout<<outputStr<<endl;
	base64Decode(outputStr, str);
	cout<<str<<endl;
	return 0;
}