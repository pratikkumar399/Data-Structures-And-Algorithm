#include<bits/stdc++.h>
using namespace std ;

int maxRange(int arr[], int start, int end) {
        int maxValue = arr[start];
        for (int i = start; i <= end; i++) {
            if (arr[i] > maxValue) {
                maxValue = arr[i];
            }
        }
        return maxValue;
    }
int max(int arr[], int n) {
        int maxValue = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] > maxValue) {
                maxValue = arr[i];
            }
        }
        return maxValue;
    }
int main(){
    int arr[] = { 1, 3, 23, 9, 18 };
    int n = sizeof(arr) / sizeof(arr[0]);
        cout<<(max(arr, n));
        cout<<(maxRange(arr , 1 ,4));
    return 0;
}
