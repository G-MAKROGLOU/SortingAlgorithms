#include <iostream>

using namespace std;

int bubbleSort(int arr[0]){
     for(int i = 0; i <= 7; i++){
        for(int j = i+1; j <= 8; j++){
            int temp;
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i <= 8; i++){
        cout<<arr[i]<<"|";
    }
    return 0;
}


int selectionSort(int arr[0]){
    for(int k = 0; k < 9; k++){
        int current = arr[k];
        int currentIndex = k;

        for(int l = k; l < 9; l++ ){
            if(arr[l] < current){
                current = arr[l];
                currentIndex = l;
            }
        }
        int temp = arr[k];
        arr[k] = arr[currentIndex];
        arr[currentIndex] = temp;
    }
    for(int m = 0; m < 9; m++){
        cout<<arr[m]<<"|";
    }
    return 0;
}

int main()
{
    int arrayA[9] = {7,5,4,9,3,8,6,1,2};
    int arrayB[9] = {4,3,6,5,1,7,8,9,2};

    //BUBBLE SORT METHOD
    cout<<"The array unsorted:"<<endl;
    for(int i = 0; i < 9; i++){
        cout<<arrayA[i]<<"|";
    }
    cout<<endl<<endl;
    cout<<"The address of the first element of the array is:"<<&arrayA[0]<<endl;
    bubbleSort(&arrayA[0]);

    // EMPTY LINE FOR SEPERATOR
    cout<<endl<<endl;

    //SELECTION SORT METHOD
    cout<<"The array unsorted:"<<endl;
    for(int i = 0; i < 9; i++){
        cout<<arrayB[i]<<"|";
    }
    cout<<endl<<endl;
    cout<<"The address of the first element of the array is:"<<&arrayB[0]<<endl;
    selectionSort(&arrayB[0]);

    return 0;
}
