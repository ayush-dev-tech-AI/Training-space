#include <stdio.h>

int main(){
    int n;
    printf("Enter the array length : ");
    scanf("%d" , &n);
    if(n <= 0){
        printf("INVALID ARRAY LENGTH!!!\n");
    } else if(n == 1){
        printf("What in the world you are going to check in one element ?? \n");
    }
    int arr[n];
    printf("Enter array elements :-\n");
    for(int i = 0 ; i < n ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i = 1 ; i < n ; i++){
        if(arr[i] <= arr[i-1]){
                printf("array is not strictly increasing\n");
                return 0;
            }
    }
    printf("array is strictly increasing\n");
    return 0;
}