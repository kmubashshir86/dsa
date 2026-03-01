#include <iostream>
using namespace std;

int avg(int a,int b){
    return a+ (b-a)/2;
}

int main(void) {
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int key =9;
    int start=0,end=9;
    // 3
    while(start<=end){
        
    if (arr[avg(start,end)]==key){
        cout<<"found\n";
        return 0;

    }
    else if(arr[avg(start,end)]>key){
        end=avg(start,end)-1;

    }
    else if(arr[avg(start,end)]<key){
        start=avg(start,end)+1;
        

    }}
    cout<<"not found\n";
    return 0;
}