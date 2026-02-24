#include <iostream>
using namespace std;

int sum(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=arr[i];
    }
    return ans;
}
int main(){
    cout<<"enter size : ";
    int size;
    cin >> size;
    int arr[size];
    for (int i=0;i<size;i++){
        cout<<"enter element : ";
        cin>>arr[i];
    }

    cout<< sum(arr,size) << "\n";

    return 0;
}