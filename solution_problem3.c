#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
   // int x[6][6]={{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24},{25,26,27,28,29,30},{31,32,33,34,35,36}};
int x[6][6];
   //filling array
   for (i=0;i<6;i++)
   {
       for (j=0;j<6;j++)
       {
           x[i][j]=i+1;
       }
   }

   //print array
      for (i=0;i<6;i++)
   {
       for (j=0;j<6;j++)
       {
           printf ("%d ",x[i][j]);
       }
       printf ("\n");
   }
//print diagonal
      for (i=0;i<6;i++)
   {
       for (j=0;j<6;j++)
       {
           if (i==j)
              printf ("%d ",x[i][j]);
            else
                printf ("  ");
       }
       printf ("\n");
   }
//print triangle
      for (i=0;i<6;i++)
   {
       for (j=0;j<=i;j++)
       {

              printf ("%d ",x[i][j]);


       }
       printf ("\n");
   }


    return 0;
}
