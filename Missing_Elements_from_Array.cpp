#include<iostream>
#include<algorithm> 
using namespace std;

// Method 1: 
// void findMissing(int *a,int n ){
//     for(int i=0;i<n;i++){
//         int index = abs(a[i]);
//         if(a[index-1]>0){
//             a[index-1] *= -1;
//         }
//     }
//     for(int i = 0 ; i < n ; i++){
//         if(a[i]>0){
//             cout << i+1<< " ";
//         }
//     }

// }

// Method 2 by me
void findMissing(int *a,int n ){
    // Sort the array
    sort(a, a + n);
    
    // Find missing number
    for(int i = 0 ; i < n; i++) {
        int index = i + 1;
        if(a[i] != index) {
            cout << index << " "; // Print missing number
        }
    }
}

int main() {
    int a[] = {1, 3, 5, 3, 4}; // Example array
    int n = sizeof(a) / sizeof(int); // Size of the array

    findMissing(a, n);

    return 0;
}
