#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[100],i,num;
    printf("Enter size of the array \n");
    scanf("%d",&num);
    printf("Enter the elements of the array\n");
    i=0;
    while(i<num){
        scanf("%d",&arr[i]);
         i++;
    }
    printf("\nEven numbers of the array are \n");
    i=0;
     while(i<num){
        if(arr[i]%2==0){
            printf("%d \t",arr[i]);
        }
        i++;
    }
    printf("\nOdd numbers of the array are \n");
    i=0;
     while(i<=num){
        if (arr[i]%2==1){
            printf("%d \t",arr[i]);
        }
        i++;
    }
    return 0;
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
