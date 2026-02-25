#include <iostream>
#include <vector>
using namespace std;

int main(void) {
    vector<int> arr1;
    vector<int> arr2;
    vector<int> ans;
    int i,j,n,m;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;

        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        
        else{
            j++;
        }
    }
    return 0;}