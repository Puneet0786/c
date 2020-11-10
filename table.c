#include<stdio.h>
int main()
{
    int a,b,c;
    printf("please enter the number for which you want see the table\n");
    scanf("%d",&a);
    printf("enter the limit of the table\n");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        c=i*a;
        printf("%d*%d=%d\n",a,i,c);
        }


    return 0;

}