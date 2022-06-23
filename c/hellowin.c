#include <stdio.h>
#include <windows.h>


int main(int argc,char* argv[])
{
	printf("start hellowin!\n");

    LPCWSTR text = L"hello world";
	LPCWSTR title = L"第一个MessageBoxW";
	MessageBoxW(NULL, text, title, MB_OK);

    printf("end hellowin!\n");
	return 0;
}