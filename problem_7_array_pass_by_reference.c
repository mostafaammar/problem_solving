/*
7-	Write a C program to calculate the average, sum and maximum of an array of 5 elements using a single function. 
*/

#include <stdio.h>
#include <stdlib.h>

void array_ops(int *max,int *average,int *sum,int x[5]);
int main()
{
    int max,average,sum;
    int x[5];
    for (int i =0;i<5;i++)
    {
        x[i]=i+1;
    }
    array_ops(&max,&average,&sum,x);
    return 0;
}
void array_ops(int *max,int *average,int *sum,int x[5])
{
    *sum=0;
    for(int i=0;i<5;i++)
    {
        *sum+=x[i];
    }
    *average=*sum/5;
    *max=x[0];
    for (int i=0;i<5;i++)
    {
        if(*max<x[i])
            *max=x[i];
    }
    printf ("the value of array sum is %d, average %d,max %d\n",*sum,*average,*max);
}
