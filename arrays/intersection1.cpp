#include <iostream>
#include <climits>
using namespace std;

int main(void) {
    int arr1[6]={1,2,2,3,4,5};
    int arr2[6]={0,1,2,2,5,9};
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if (arr1[i]<arr2[j]){
                break;
            }
            else if (arr1[i]==arr2[j]){
                cout<<arr1[i]<<"\n";
                arr2[j]=INT_MIN;
                break;}
            
            
        }
    }
    return 0;
}