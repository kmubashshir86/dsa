#include <iostream>
#include <climits>

using namespace std;

void intersec(int x[],int y[],int size_x,int size_y){
    for (int i=0;i<size_x;i++){
        for (int j=0;j<size_y;j++){
            if (x[i]<y[j]){
                break;
            }
            if (x[i]==y[j]){
                cout<<x[i]<<" ";
                y[j]=INT_MIN;
                break;
            }
            else{
                continue;
            }

    }}
}
int main(){
    int arr1[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[10]={-1,2,4,5,9,10,36,76,81,110};
    intersec(arr1,arr2,10,10);
    return 0;
}