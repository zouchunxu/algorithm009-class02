#include <vector>

class MyCircularDeque {
private:
    vector<int> data;
    int count;
    int front;
    int backend;
    int k;
public:
    /** Initialize your data structure here. Set the size of the deque to be k. */
    MyCircularDeque(int k) : data(k,0),k(k),count(0),backend(k-1),front(0) {
    }

    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if (k == count) {
            return false;
        }
        data[front] = value;
        front = (front + 1) % k;
        count++;
        return true;
    }

    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if (k == count) {
            return false;
        }
        data[backend] = value;
        count++;
        backend = (backend - 1 + k) % k;
        return true;
    }

    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if (count <= 0) {
            return false;
        }
        count--;
        front = (front - 1 + k) % k;
        return true;
    }

    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
        if (count <= 0) {
            return false;
        }
        backend = (backend + 1) % k;
        count--;
        return true;
    }

    /** Get the front item from the deque. */
    int getFront() {
        if (count <= 0) {
            return -1;
        }
        return data[(front - 1 + k) % k];
    }

    /** Get the last item from the deque. */
    int getRear() {
        if (count <= 0) {
            return -1;
        }
        return data[(backend + 1) % k];
    }

    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
        return count == 0;
    }

    /** Checks whether the circular deque is full or not. */
    bool isFull() {
        return k == count;
    }
};

