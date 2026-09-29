#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int>&arr, int st, int end){
    int idx = st-1, piv = arr[end];
    for(int i=st;i<end;i++){
        if(arr[i]<=piv) swap(arr[i],arr[++idx]);
    }
    idx++;
    swap(arr[end],arr[idx]);
    return idx;
}

void quickSort(vector<int> &arr, int st, int end){
    if(st>=end) return; 
    int pivIdx=partition(arr, st, end);
    quickSort(arr,st,pivIdx-1);
    quickSort(arr,pivIdx+1,end);
}
int main(){
    vector<int> arr = {15,3,2,244,55};
    quickSort(arr, 0, arr.size()-1);
    for(int val:arr) cout << val << " ";
}


// avg / practical time complexity - nlogn
// worst case - n^2
// space complexity - constant