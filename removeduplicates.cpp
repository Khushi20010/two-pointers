#include<iostream>
#include<vector>
using namespace std;
int removeDuplicates(vector<int>&arr){
    if(arr.size() == 0) return 0;
    int i=0;
    for(int j=1;j<arr.size(); j++){
        if(arr[i] != arr[j]){
            i++;
                arr[i]  =arr[j];
        }
    
    }
    return i+1;
}
int main(){
    vector<int>arr = {1,1,2,2,3,3,4,4444,4444};
    int newLength = removeDuplicates(arr);
    cout<<"Array after removing duplicates:";
    for(int i=0;i<newLength; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nNewlength :"<<newLength<<endl;
    return 0;
}