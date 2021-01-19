#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void list_items(char names[5][20],char products[5][20],int quantity[5]);
void find_user_items(char names[5][20],char products[5][20],int quantity[5]);

int main()
{
    char names[5][20]={"ahmed","ibrahim","hussein","sayed","aly"};
    char products[5][20]={"chocolate","pepsi","coca","fanta","molto"};
    int quantity[5]={10,10,10,10,10};

    list_items(names,products,quantity);
    find_user_items(names,products,quantity);
    return 0;
}


void list_items(char names[5][20],char products[5][20],int quantity[5])
{
    for (int i =0 ;i<5;i++)
    {
        printf ("%-10s     %-10s     %d\n",names[i],products[i],quantity[i]);

    }

}

void find_user_items(char names[5][20],char products[5][20],int quantity[5])
{
    char username[20];
    scanf("%s",username);

    for (int i=0;i<5;i++)
    {
        if (strcmp(username,names[i])==0)
        {
            printf ("%-10s       %-10s       %d\n",names[i],products[i],quantity[i]  );
            break;
        }
    }

}
