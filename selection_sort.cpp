#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        int smallestIdx = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestIdx]){
                smallestIdx = j;
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}



int main(){
    vector<int> nums = {4,1,5,2,3};
    selectionSort(nums);
    for(int val: nums){
        cout << val << " ";
    }
}