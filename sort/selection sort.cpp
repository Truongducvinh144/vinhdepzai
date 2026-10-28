#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        // danh dau vi tri min
        int min_index = i;
        for(int j = i + 1; j < n; j ++){
            if(arr[j] < arr[min_index]){
                // cap nhat min moi
                min_index = j;
            }
        }
        // swap min voi i la ta duoc pha tu nho nhat len dau
        swap(arr[i], arr[min_index]);
    }
}

int main() {
	// your code goes here
	
}
