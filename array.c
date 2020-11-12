#include<stdio.h>
void reverse_array(int arr[],int b){    
    for (int i = 0; i <= b/2; i++)
    {
        int a;
        a=arr[i];
        arr[i]=arr[b-i];
        arr[b-i]=a;
    }    
}
// void reverse_array(int arr[],int a,int b)
// {
//     int tem;                        // 654321
//     while (a<b)
//     {
//         int temp;
//         temp=arr[a];
//         arr[a]=arr[b];
//         arr[b]=temp;
//         a++;
//         b--;
//     }
//     }
void print_array(int arr[],int c){
    
    for (int i = 0; i < c; i++)
    {
        printf("The Array of position %d is %d\n",i,arr[i]);
        
    }
}
int main()
{ 
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        
    }
    printf("Array before reversing:\n");
    print_array(arr,n);
    // reverse_array(arr,0,n-1);
    // upper reverse array is used when while loop is used
    reverse_array(arr,n-1);
    printf("Array after reversing:\n");
    print_array(arr,n);
    
    return 0;
}