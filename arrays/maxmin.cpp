#include <iostream>
#include <climits>

using namespace std;
int min(int arr[],int size){
    int mini = INT_MAX;
    for (int i=0;i<size;i++){
        if ( mini > arr[i]){
            mini=arr[i];
        }
    }
    return mini;
}

int max(int arr[],int size){
    int maxi = INT_MIN;
    for (int i=0;i<size;i++){
        if ( maxi < arr[i]){
            maxi=arr[i];
        }
    }
    return maxi;
}
int main(){
    cout<<"enter size : ";
    int size;
    cin >> size;
    //int arr[size] bad practice
    int arr[100];
    for(int i=0;i<size;i++){
        cout<<"enter element : ";
        cin>> arr[i];
    }
    cout<<"min" << min(arr,size) << " " ;
    cout<<"max" << max(arr,size) << " " ;
    return 0;


}