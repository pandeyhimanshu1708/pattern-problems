//pattern problem
#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=7;i++)
    {
        k='A';
        for(j=1;j<=13;j++)
        {
            if(j<=8-i || j>=6+i)
            {
                printf("%c",k);
                k<=7?k--:k++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");

        
    }
    printf("\n");
    return 0;
}