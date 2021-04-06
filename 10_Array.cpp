#include <stdio.h>

float testIntVariable()
{
    // input 5 int
    int a,b,c,d,e;
    printf("a: "); scanf("%d", &a);
    printf("b: "); scanf("%d", &b);
    printf("c: "); scanf("%d", &c);
    printf("d: "); scanf("%d", &d);
    printf("e: "); scanf("%d", &e);

    float avg = (a+b+c+d+e)/5.0;
    printf("Avg: %.2f\n", avg);
    return avg;
}
#define MAX_NUM 5
void testArrayInt()
{
    int arr[MAX_NUM];
    int total =0;

    for (int i=0; i<MAX_NUM; i++)
    {
        printf("arr[%d]: ",i); scanf("%d", &arr[i]);
        total = total + arr[i];
    }
    float avg = total/MAX_NUM;
    printf("Avg: %.2f\n", avg);
}

void InputArrayInt(int arr[], int count)
{
    for (int i=0; i<count; i++)
    {
        printf("arr[%d]: ",i); scanf("%d", &arr[i]);
    }
}

int totalOfArray(int arr[], int count)
{
    int total=0;
    for (int i=0; i<count; i++)
        total = total+arr[i];
    return total;    
}

int main()
{
    int arrInt[5]={0};
    InputArrayInt(arrInt, 5);
    printf("Total element: %d\n", totalOfArray(arrInt, 5));

    // int arrInt2[20]={0};
    // InputArrayInt(arrInt2, 20);
    // printf("Total element: %d\n", totalOfArray(arrInt, 20));
    // testIntVariable();
    // testArrayInt();
}