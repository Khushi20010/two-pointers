#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>threeSum(vector<int>&arr){
    vector<vector<int>>result;
    sort(arr.begin() , arr.end());
    int n=arr.size();
    for(int i=0;i<n-2;i++){
        if(i>0 && arr[i] == arr[i-1])continue;
        int left = i-1 , right=n-1;
        while(left<right){
     int sum  = arr[i] + arr[left] + arr[right];
     if(sum == 0){
        result.push_back({arr[i] , arr[left] ,arr[right]});
        while(left<right && arr[left]  ==arr[left+1])left++;
        while(left<right && arr[right]  ==arr[right-1])right--;
        left++;
        right--;
     }
     else if(sum<0)
     left++;
     else{
right--;
     }
        }
   

    }
    return result;
}
int main(){
    vector<int>arr = {-1,1,0,-2,2,-3,3};
    vector<vector<int>>triplets = threeSum(arr);
    cout<<"Unique triplets pairs are\n";
    for(const auto& triplet:triplets){
        for(int num:triplet){
            cout<<num<<" ";
        }
        cout<<endl;
    }
    return 0;
}
