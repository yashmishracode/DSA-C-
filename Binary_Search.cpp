#include<iostream>
using namespace std;

int BinarySearch(int *arr,int size,int target){

    int start = 0 ;
    int end = size - 1;
    int mid = start + (end-start)/2;

    while(start <= end){
        int element = arr[mid];
    
        if(element == target){
            return mid;
        }
        else if(target < element){
            //Search in left
            end = mid-1;
        }
        else{
            // search in right 
            start = mid +1;
        }
        mid = start+(end-start)/2; 
    }
    return -1;

}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int target = 7;

    int indexTarget = BinarySearch(arr,size,target);

    if(indexTarget == -1){
        cout << "Target not Found" << endl;
    }
    else {
        cout << "the index of target is " << indexTarget << endl;
    }
    return 0;
}