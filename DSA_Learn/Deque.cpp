#include <iostream>
using namespace std;

#define SIZE 10  // Maximum size of deque

class Deque
 {
private:
    int arr[SIZE];
    int front, rear;

public:
    // Constructor
    Deque()
     {
        front = -1;
        rear = -1;
    }

    // Check if deque is empty
    bool isEmpty()
     {
        return (front == -1);
    }

    // Check if deque is full
    bool isFull()
     {
      
        return (

            (front == 0 && rear == SIZE - 1) || (front == rear + 1)
        
        );
    }

    // Insert at front
    void insertFront(int value)
     {
        if (isFull()) 
        {
            cout << "Deque is Full!" << endl;
            return;
        }
        if (front == -1) { // First element
            front = rear = 0;
        } else if (front == 0) {
            front = SIZE - 1; // Circular condition
        } else {
            front--;
        }
        arr[front] = value;
    }

    // Insert at rear
    void insertRear(int value)
     {
        if (isFull()) {
            cout << "Deque is Full!" << endl;
            return;
        }
        if (rear == -1) { // First element
            front = rear = 0;
        } else if (rear == SIZE - 1) {
            rear = 0; // Circular condition
        } else {
            rear++;
        }
        arr[rear] = value;
    }

    // Delete from front
    void deleteFront()
     {
        if (isEmpty())
         {
            cout << "Deque is Empty!" << endl;
            return;
        }
        cout << "Deleted from front: " << arr[front] << endl;
        if (front == rear) { // Single element
            front = rear = -1;
        } else if (front == SIZE - 1)
         {
            front = 0;
        }
         else
          {
            front++;
        }
    }

    // Delete from rear
    void deleteRear()
     {
        if (isEmpty())
         {
            cout << "Deque is Empty!" << endl;
            return;
        }
        cout << "Deleted from rear: " << arr[rear] << endl;
        if (front == rear)
         { // Single element
            front = rear = -1;
        } 
        else if (rear == 0)
         {
            rear = SIZE - 1;
        }
         else
          {
            rear--;
        }
    }

    // Display Deque
    void display()
     {
        if (isEmpty())
         {
            cout << "Deque is Empty!" << endl;
            return;
        }
        cout << "Deque Elements: ";
        int i = front;
        while (true)
         {
            cout << arr[i] << " ";
            if (i == rear) break;
            i = (i + 1) % SIZE;
        }
        cout << endl;
    }
};

int main()
 {
    Deque dq;

    dq.insertFront(10);
    dq.insertRear(20);
    dq.insertFront(5);
    dq.insertRear(30);

    dq.display();

    dq.deleteFront();
    dq.deleteRear();

    dq.display();

    return 0;
}
