#include "Debug.h"
class Debug
{
public:
	static void Output(const char* str);
};
int test;

#include<DxLib.h>

//int test = 10;

void Debug::Output(const char* str){
	OutputDebugStringA(str);
	test++;
}
