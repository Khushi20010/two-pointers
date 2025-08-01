#include<iostream>
#include<vector>
using namespace std;
int maxArea (vector<int>&arr){
    int i=0;
    int j=arr.size()-1;
    int maxWater  =0;
    while(i<j){
        int width  =j-i;
        int currentWater  =min(arr[i] , arr[j])*width;
        maxWater = max(maxWater , currentWater);
        if(arr[i]<arr[j]){
            i++;

        }
        else{
            j--;
        }
    }
    return maxWater;

}
int main(){
    vector<int>arr = {1,8,6,4,5,9,8,4,6,8,5,3};
    cout<<"Max water is:  "<<maxArea(arr)<<endl;
}
