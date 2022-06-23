#include <stdio.h>

int main(int argc,char* argv[])
{
	printf("hello world!\n");

    int a=1;
    int* b=&a;
    printf("a address:%p\n", &a);
    printf("b content:%p\n",b);
    printf("*b :%d\n", *b);
	return 0;
}
