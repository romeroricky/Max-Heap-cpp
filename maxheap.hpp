#include <vector>
using namespace std;

class MaxHeap {
private:
  vector<int> arr;
    int currentSize;
  int left(int parent);
  int right(int parent);
  int parent(int child);
  void percolateDown(int index); // used for giving the heap max heap structure
  void percolateUp(int index);   // used for inserting in the heap at proper position
  void heapify();
  void buildHeap(vector<int> A,int n);
//    void heapify(vector<int>& A, int n, int i);

  
public:
  MaxHeap();
  ~MaxHeap();
  void insert(int element);
  int deleteMax();
  void display();
  void heapsort(vector<int>& A,int n);
  int size();
};
