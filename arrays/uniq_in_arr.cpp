#include <iostream>
using namespace std;
int uniq(int arr[],int size){
    int ans=arr[0];
    for(int i=1;i<size;i++){
        ans^=arr[i];
    }
    return ans;
}
int main(void) {
    int arr[9]={1,2,3,4,5,4,3,2,1};
    cout<<uniq(arr,9)<<endl;
    return 0;
}