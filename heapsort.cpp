#include<iostream>
using namespace std;
#include<vector>

void heapify(int arr[],int n,int i) {
    int largest = i;
    int left_Node = 2 * i + 1;
    int right_Node = 2 * i + 2;

    if(left_Node < n && arr[left_Node] > arr[largest]) { //checking for the left part
        largest = left_Node;
    }

    if(right_Node < n && arr[right_Node] > arr[largest]) { //checking for the right part
        largest = right_Node;
    }

    if(largest != i) {
        swap(arr[i] , arr[largest]);
        heapify(arr,n,largest);
    
    }
}

//Builds a max heap from the array.
void buildHeap(int arr[], int n) {
    for (int i = n /  2 - 1 ; i >= 0 ; i--) {
       heapify(arr, n, i) ;  
    }

    for(int i = n-1; i > 0;i--) {
        swap(arr[0] , arr[i]);
        heapify(arr,i,0);
    }
}

void print(int arr[],int n) {
    for(int i=0;i<n;i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }
    // Build Heap
    buildHeap(arr,n);

    // Print Heap
    print(arr,n);

    return 0;
}

