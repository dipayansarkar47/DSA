#include <iostream>
using namespace std;

class Heap{
    public:
        int arr[101];
        int size;
        Heap(){
            size = 0;
        }

        void insert(int val){
            // Step 1: Insert at the last position of the array
            size = size + 1;
            int index = size;
            arr[index] = val;


            // Step 2: Place the val in the right psition
            while(index > 1){
                int parentIndex = index/2;
                if(arr[parentIndex]<arr[index]){
                    swap(arr[parentIndex],arr[index]);
                    index = parentIndex;
                }else{
                    break;
                }
            }
        }
        
        int delete() {

                int ans  = arr[1];
                //replace root node value with last node data
                arr[1] = arr[size];
                size--;

                //place root node ka data on its correct position
                int index = 1;
                while(index < size) {
                        int left = 2*index;
                        int right = 2*index+1;
                        
                        int largest = index;

                        if(left < size && arr[largest] < arr[left] ) {
                                largest = left;
                        }
                        if(right < size && arr[largest] < arr[right] ) {
                                largest = right;
                        }

                        if(largest == index) {
                                //value is atr correct position
                                break; 
                        }
                        else {
                                swap(arr[index], arr[largest]);
                                index = largest;
                        } 
                }
                return ans;
        }
};

int main()
{
    Heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 45;
    h.size = 5;

    cout << "Printing the heap: " << endl;
    for(int i=0; i<=h.size; i++){
        cout << h.arr[i] << " ";
    }cout << endl;

    h.insert(110);
    h.delete(40);
    cout << "Printing the heap: " << endl;
    for(int i=0; i<=h.size; i++){
        cout << h.arr[i] << " ";
    }cout << endl;

    return 0;
}