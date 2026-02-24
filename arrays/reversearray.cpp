#include <iostream>
using namespace std;
void reverse(int arr[],int size){
    int temp;
    if(size%2==0){
        for(int i=0;i<(size/2)+1;i++){
            temp=arr[i];
            arr[i]=arr[size-1-i];
            arr[size-1-i]=temp;
        }

    }
    else{
        int i,j;
        j=(size-1)-i;
        i=0;
        int temp;
        while(j<i){
            
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;

        }
    }
}
int main(void) {
    int arr[11]={1,2,34,5,67,890,1,23,4,5,11};
    reverse(arr,11);

    for (int i=0;i<11;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}