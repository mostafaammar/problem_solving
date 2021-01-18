#include <stdio.h>
#include <stdlib.h>


int getmax (int x[10]);
int main()
{
    int x[10];
    int maximum;
    //fill array
    for (int i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    maximum=getmax(x);
    printf("the maximum value in array is %d\n",maximum);

    return 0;
}
int getmax (int x[10])
{
    int maximum;
    maximum=x[0];
    for (int i =1;i<10;i++)
    {
            if (maximum<x[i])
                maximum=x[i];
    }

    return(maximum);

}
