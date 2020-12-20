#include <stdio.h>
#include <stdlib.h>
int arrmin (int a[5]);
int average (int a[5]);
int main()
{

    int x[5] ={10,20,30,40,50};
    int result;
    result=arrmin(x);
    printf("The minimum of array is %d\n", result);
    printf (" the average of array is %d\n",average(x));
    return 0;
}
int arrmin(int a [5])
{
    int min;
    min = a[0];
    for (int i =1;i<5;i++)
    {
        if (min > a[i])
        min =a[i];
    }
    return(min);
}
int average( int a[5])
{
    int sum=0;
    for (int i=0 ; i <5; i ++)
    {
        sum =sum+a[i];
    }
    return(sum/5);
}
