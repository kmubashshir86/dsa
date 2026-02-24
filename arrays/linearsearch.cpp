#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0; i<size;i++){
        if (key==arr[i]){
            return true;
        }

    }
return false;
}

int main(void) {
    int arr[20] = { 0,11,111,232,112,5,7,9,3,-1,0,1};
    cout<<"enter element to search : ";
    int key;
    cin>>key;
    cout<< search(arr,20,key);
    return 0;
}