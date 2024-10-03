#include<iostream>
using namespace std;

int root(int n) {
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e) { // Corrected to <=
       
        
        if (mid*mid == n) {
            return mid;
        }
        if (mid*mid > n) {
            // Search on the left
            e = mid - 1;
        } else {
            // Save and search on the right
            ans = mid;
            s = mid + 1;  // Avoid infinite loop
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    int number;
    cout << "Enter the number you want to find the root of: " << endl;
    cin >> number;

    int ans = root(number);

    cout << "Square root of the given number is: " << ans << endl;
    return 0;

    int decimal;
    cout << "Enter no of decimal points you want " << endl;
    cin >> decimal;
    int finalAns ;
    

}
