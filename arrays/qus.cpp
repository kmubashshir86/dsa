#include <iostream>
int istOCC(int arr[],int size,int key){
    int start=0,end=size-1;
    while(start<=end){
        start=(start+end)/2;
        if (arr[start]==key){
            return start;
        }
        if(arr[start]<key){
            start++;
        }
        else{
            end=start-1;
            start=0;
        }
    }
    std::cout<<std::endl;
    return -1;

}
int lstOCC(int arr[],int size,int key){
    int start=0,end=size-1;
    while(start<=end){
        start=(start+end)/2;
        if (arr[start]==key){
            return start;
        }
        if(arr[start]<key){
            start++;
        }
        else{
            end=start-1;
            start=0;
        }
    }
    std::cout<<std::endl;
    return -1;

}
int main(){
    int a[10]={1,2,3,4,5,8,9,9,11,20};
    bs(a,10,9);
    return 0;
}