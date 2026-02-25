#include <iostream>
using namespace std;
void parr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    cout<<"\n";
    }
}

void swapalt(int arr[],int size){
    for(int i=0;i<size-1;i++){
        swap(arr[i],arr[i+1]);
        i++;
    }
}
int main(void) {
    int a[5]={4,2,1,5,8};
    int b[4]={4,2,1,5};
    swapalt(a,5);
    swapalt(b,4);
    parr(a,5);
    parr(b,4);
    return 0;
}