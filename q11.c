//pattern problem
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=5;i++)
    {
        k='A';
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

    }
    // printf("\n");
    return 0;
}