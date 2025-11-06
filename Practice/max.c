
#include <stdio.h>
int arr[100];
int n;
void max();
int main(){
    printf("How many numbers you want to enter");
     
    scanf("%d",&n);
     printf("Enter your array");
     for(int i=0;i<n;i++){
         scanf("%d",&arr[i]);
     }
     max();
     printf("Thanks");
     return 0;
}
void max(){
    int max=0;
    for(int i=0;i<n;i++){
        int sum=arr[i]+arr[i+1]+arr[i+2];
        if(sum>max){
            max=sum;
        }
    }
    
    for(int i=0;i<n;i++){
        int sum=arr[i]+arr[i+1]+arr[i+2];
        if(sum==max){
            printf("The three consecutive numbers are %d, %d, %d\n",arr[i],arr[i+1],arr[i+2]);
            break;
        }
    }
    
    printf("Maximum sum of three consecutive numbers is %d\n",max);
}