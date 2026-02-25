#include <iostream>
using namespace std;
void rev(int arr[],int size);
int main(){
    int a[4]={2,7,5,9};
    int b[5]={2,7,1,5,9};
    rev(a,4);
    rev(b,5);
    for(int i=0;i<4;i++){
        cout<< a[i] << " ";
    }
    cout<<"\n";
    for(int i=0;i<5;i++){
        cout<< b[i] <<" ";
    }
    return 0;
}

void rev(int arr[],int size){
        for(int i=0;i<(size/2);i++){
            arr[i]=arr[i]+arr[size-1-i];
            arr[size-1-i]=arr[i]-arr[size-1-i];
            arr[i]=arr[i]-arr[size-1-i];
        }
}
