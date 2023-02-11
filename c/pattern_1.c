#include<stdio.h>
int main()
{ int i=0, j=4, n;
for(n=0;n<=4;n++)
{
    for(j=4-n;j>=0;j--)
    {
        printf("  ");
    }
     
    for(i=0;i<=n;i++){
        printf("  *  ");
    }
    printf(" \n ");
    

}
}