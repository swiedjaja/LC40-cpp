#include <stdio.h>
#include <string.h>
void testPointer()
{
    int i;
    int* ptr;

    ptr = &i;
    i = 10;
    printf("ptr: %p %x *ptr: %d\n", ptr, ptr, *ptr);
    *ptr = 20;

    char str[5] = "1234";
    char *s;
    s = str;
    putchar(*s++);
    putchar(*s++);
}

void testAllocMemory()
{
    char *s = new char[1024*1024*1024]; // 16MBytes
    if (s==NULL)
    {
        printf("Memory allocation error\n");
        return;
    }
    printf("Allocation successfull: %X\n", s);
    strcpy(s, "Hello");
    delete[] s;    
}

#include <malloc.h>
void testAllocMemoryC()
{
    char *s;
    s = (char*)malloc(1024*1024*sizeof(char));
    if (s==NULL)
    {
        printf("Memory allocation error\n");
        return;
    }
    printf("Allocation successfull: %X\n", s);
    strcpy(s, "Hello");
    free(s);    
}
int main()
{
    testAllocMemory();
}