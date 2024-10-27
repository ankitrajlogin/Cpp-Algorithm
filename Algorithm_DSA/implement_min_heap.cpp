
#include <bits/stdc++.h>
using namespace std;

class MinHeap{
    private : 
    vector<int>arr ; 
    int size ; 
    int capacity ; 

    public:

        MinHeap(int capacity){
            this->size = 0 ; 
            this->capacity = capacity ;
            this->arr.resize(capacity) ; 
        }

        void heapify(int i){
            int smallest = i ; 
            int left = 2*i +1 ; 
            int right = 2*i +2 ; 

            if(left < size && arr[left] < arr[smallest])
                smallest = left ; 

            if(right < size && arr[right] < arr[smallest])
                smallest = right ; 

            if(smallest != i){
                swap(arr[i] , arr[smallest]) ; 
                heapify(smallest) ; 
            }
        }

        void buildHeap(vector<int>vect){
            capacity = vect.size() ; 
            size = capacity ; 
            arr = vect ; 

            // Heapify the (n-1)/2 nodes
            for (int i = (size - 1) / 2; i >= 0; i--) {
                heapify(i);
            }
        }

        void insertNode(int value) {
            if (size == capacity) {
                capacity *= 2;
                arr.resize(capacity);
            }

            size++;
            int i = size - 1;
            arr[i] = value;

            while (i != 0 && arr[(i - 1) / 2] > arr[i]) {
                swap(arr[i], arr[(i - 1) / 2]);
                i = (i - 1) / 2;
            }
        }

        int peek(){
            if(size <= 0){
                return -1 ; 
            }

            return arr[0] ; 
        }

        // function to remove and return the minimum value from the heap ;
        int extractMin(){
            if(size <= 0){
                return -1 ; 
            }
            if(size == 1){
                size-- ; 
                return arr[0] ; 
            }

            int root = arr[0] ;  
            arr[0] = arr[size-1] ; 
            size-- ; 

            heapify(0) ; 
            return root ; 
        }

        void DeleteNode(int key){
            int index = -1 ; 

            for(int i = 0 ; i< size ; i++){
                if(arr[i] == key){
                    index = i ; 
                    break ; 
                }
            }

            if(index == -1){
                return ; 
            }

            if(index == size-1){
                size-- ; 
                return ; 
            }

            arr[index] = arr[size-1] ; 
            size-- ; 

            heapify(index) ; 
        }


        void printHeap() const {
            for (int i = 0; i < size; ++i)
                cout << arr[i] << " ";
            cout << endl;
        }
};


int main(){
    MinHeap minHeap(6);
    vector<int> arr = {15, 10, 5, 4, 3, 2};

    // Build the heap from the array
    minHeap.buildHeap(arr);

    // Print the min heap
    cout<<"Min Heap built from the array: ";
    minHeap.printHeap();

    // Insert a node into the heap
    minHeap.insertNode(1);
    cout << "Min Heap After inserting the node 1: ";
    minHeap.printHeap();

    // Get the minimum value from the min heap
    cout << "Topmost value of min Heap: " << minHeap.peek() << endl;

    // Delete the root node of the min heap
    cout << "Minimum Extracted value fro Min Heap: " << minHeap.extractMin() << endl;
    cout << "After extracting Min Heap: ";
    minHeap.printHeap();

    // Deleting  a specific value from the min heap
    minHeap.DeleteNode(4);
    cout << "After deleting the node 4 from the Min Heap: ";
    minHeap.printHeap();

    return 0;
    

return 0 ;
}