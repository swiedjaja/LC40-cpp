#include <stdio.h>
// is equal: ==
// is not equal: !=
// and: &&
// or : ||
int main()
{
    int i=0;
    for (;;i++)
    {
        if (i!=0)
            continue;
        printf("i: %d\n", i);

        if (i==10)
            break;
    }
    // do {
    //     printf("i: %d\n", i++);
    // } while (i<10);
    
}