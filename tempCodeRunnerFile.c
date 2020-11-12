#include<stdio.h>
int main()
{   
    float  kmtomile=0.621371;
    float  inchestofoot=0.0833333;
    float  cmstoinches=0.393701;
    float  poundstokgs=0.453592;
    float  inchestometer=0.0254;
    float num;
    printf("enter the number \n");
    scanf("%f",&num);
    while (1)
    {
        int a;
        printf("enter the following coversion\n       1. for km to mile\n       2. for inches to foot\n       3. for cm to inches\n         4.pound to kg\n       5. for inches to meter\n       q to quit\n");
        scanf("%d",&a);
        switch (a)
        {
        case 1:
            printf("The number %f km to mile is %f\n",num,num*kmtomile);
            break;
        case 2:
        printf("The number %f inches to foot is %f\n",num,num*inchestofoot);
        break;
        case 3:
        printf("The number %f cm to inch is %f\n",num,num*cmstoinches);
        break;
        case 4:
        printf("The number %f pound to kg is %f\n",num,num*poundstokgs);
        break;
        case 5:
        printf("The number %f inches to meter is %f\n",num,num*inchestometer);
        break;
        case 'q':
        goto end;
        break;
        default:
        goto end;
            break;
        }
    }
    end:
    
       return 0;
}


