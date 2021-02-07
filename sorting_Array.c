#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[5][20]={"mostafa","mohamed","aly","zaki","ghaly"};
    int grades[5]={122,23,3,64,5};
    int tmp;
    for (int i=0;i<4;i++)
        {
            for (int j=i+1;j<5;j++)
            {
                if(grades[i]>grades[j])
                {
                        tmp=grades[j];
                        grades[j]=grades[i];
                        grades[i]=tmp;

                }
            }
        }
    for(int i=0;i<5;i++)
    {
        printf("%d\n",grades[i]);
    }
    return 0;
}
