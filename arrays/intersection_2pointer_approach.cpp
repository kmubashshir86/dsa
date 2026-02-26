#include <iostream>
using namespace std;

int main(void) {
    int arr1[5]={1,2,3,4,5};
    int size1=5;
    int arr2[5]={0,1,5,7,9};
    int size2=5;
    int i,j;
    i=j=0;
    while(i!=size1 && j!=size2){
    if(arr1[i]<arr2[j]){
        i++;
    }
    else if(arr1[i]>arr2[j]){
        j++;
    }
    else{
        cout<<arr1[i]<<endl;
        i++;
        j++;
    }}
    return 0;
}