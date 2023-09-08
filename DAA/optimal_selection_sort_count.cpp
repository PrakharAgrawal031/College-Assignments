
// Online IDE - Code Editor, Compiler, Interpreter

#include<iostream>

using namespace std;

int select(int arr[], int n, int count){
    for(int i=0; i<n; i++){
        count+=2;
        for (int j=i+1; j<n; j++){
            count+=4;
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                count+=3;
            }
        }
        // count = count - 3;
    }
    // count = count - 2;
    for(int i = 0; i<n; i++){
        count = count + 3;
        cout<<arr[i]<<" ";
    }
    
    return count;
}

int main()
{
    int count = 2;
    //int arr[5] = {1,3,4,5,6}; // best case
    //int arr[5] = {6,5,4,3,1}; // worst case
    int arr[5] = {4,1,5,6,3}; // avg case
    
    int new_count = select(arr, 5, count);
    cout<<endl<<"count  = "<<new_count;
    return 0;
}
