#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    while(1)
    {
        malloc(1024);       //内存溢出
    }
}