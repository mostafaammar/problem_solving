#include <stdio.h>
#include <stdlib.h>

int arr_min(int a[10]);
int arr_max(int a[10]);
int arr_average (int a[10]);
int arr_sum(int a[10]);


int main()
{
    int sum,average,minimum,maximum;
    int x[10]={2,4,6,8,10,12,14,16,18,20};
    sum=arr_sum(x);
    average=arr_average(x);
    minimum=arr_min(x);
    maximum=arr_max(x);

    printf(" average = %d \n sum= %d \n min= %d \n max= %d \n",average,sum,minimum,maximum);

    return 0;
}





int arr_min(int a[10])
{
    int minimum;
    minimum=a[0];
    for (int i=1;i<10;i++)
    {
        if (minimum > a[i])
            minimum=a[i];
    }
    return (minimum);
}



int arr_max(int a[10])
{
    int maximum;
    maximum=a[0];
    for (int i=1;i<10;i++)
    {
        if (maximum < a[i])
            maximum=a[i];
    }
    return (maximum);
}

int arr_average(int a[10])
{
    int sum=0;
    for (int i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    return(sum/10);
}

int arr_sum(int a[10])
{
    int sum=0;
    for (int i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    return(sum);
}
