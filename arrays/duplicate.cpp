#include <iostream>
#include <array>
int main(){
    int ans=0;
    int arr[5]={1,2,3,3,4};
    for(int i=0;i<5;i++){
        ans^=arr[i];
    }
    for(int i=1;i<5;i++){
        ans^=i;
    }

    printf("%d\n",ans);
    return 0;
}