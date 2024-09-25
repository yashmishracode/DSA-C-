#include<iostream>
#include<vector>
using namespace std;

void wave(vector<vector<int>> a){
    int row = a.size();
    int col = a[0].size();
    for(int i =0 ;i<col;i++){
        if((i & 1)==0){
            for(int j = 0 ; j<row ; j++){
                cout << a[j][i] << " ";
            }
        }
        else{
            for(int j=row-1;j>=0;j--){
                cout << a[j][i] << " ";
            }
        }
    }
}
int main (){
    vector<vector<int>> v {
        {1,2,3},
        {5,6,7},
        {9,10,11}
    };
    wave(v);
    return 0;
}