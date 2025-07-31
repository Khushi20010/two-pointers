#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>twoSum(vector<int>&arr , int target){
    sort(arr.begin() , arr.end());
    int i=0 , j=arr.size()-1;
    while(i<j){
        int sum= arr[i] + arr[j];
        if(sum == target){
            return{i,j};
        }
        else if(sum<target){
            i++;
        }
        else{
            j--;
        }
    }
    return {-1,-1};
}
int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8};
    int target = 10;
    vector<int>result = twoSum(arr , target);
    if(result[0]!=  -1)
        cout<<"Pairs of given sum are "<<result[0]<<" and "<< result[1]<<endl;
        else
        cout<<"No pairs are found"<<endl;
    
}