#include <iostream>
using namespace std;

void printarry(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"\n";

}
int main(){

    //declare
    int array[10];

    cout<<endl<<"everything is fine"<<endl;

    cout<<"at 0 index in array "<<array[0]<<endl;

    //cout<<array[20];

    int sec[3] ={1 ,2 ,3};

    cout<<"at 2 index "<<sec[2]<<endl;

   

    for(int i=0;i<3;i++){
        cout<<sec[i]<<endl;
    }
    
    printarry(sec,3); 
    return 0;
}