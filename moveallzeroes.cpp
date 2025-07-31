#include<iostream>
#include<vector>
using namespace std;
void moveZerosToEnd(vector<int>&arr){
    int j=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i] !=0){
            swap(arr[i] , arr[j]);
            j++;
        }
    }
}
int main(){
    vector<int>arr = {1,0,2,0,3,0,4,0,5};
    moveZerosToEnd(arr);
    cout<<"Array after moving all zeros to end:";
    for(int i=0;i<arr.size(); i++){
        cout<<arr[i]<<" ";
    
    }
        return 0;
}