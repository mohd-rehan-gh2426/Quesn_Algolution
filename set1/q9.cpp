#include<stdio.h>

int main(){
    int arr[7] = {1,2,2,3,3,1,1};
    int i,count=0,j = 0;
    int N = sizeof(arr)/sizeof(arr[0]);
    for(i = 0; i < N; i++){
        for(j = i+1; j < N; j++)
        {
        if(arr[i] == arr[j])
        {
            count++;
            
        }
        }
    }
    
    printf("%d",count);
}

 