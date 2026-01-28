#include<iostream>
using namespace std;

int max_sum(int arr[], int n){
    int sum = arr[0];
    int i =0;
    int max_sum = arr[0];
    while (i < n ){
        sum = max(arr[i], sum +arr[i]);
        max_sum = max(max_sum , sum);
        i++;
    }
    return max_sum;
}


int main(){
    int arr[8] = {-2,-5,6,-2,-3,1,5,-6};
    cout<<max_sum(arr ,8);
    return 0;
}
