#include <iostream>
using namespace std;

int main(void) {
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    int triplet=6;
    for (int i=0;i<size;i++){
         for (int j=i+1;j<size;j++){
             for (int k=j+1;k<size;k++){
                if(arr[i]+arr[j]+arr[k]==triplet){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" ";
                }
        
    }   
    } 
    }
    return 0;
}