#include <iostream>
#define SIZE 100  // Define SIZE

class Queue
{
  int a[SIZE];
  int rear;
  int front;

public:
  Queue() { front = rear = -1; }

  void enqueue(int x);
  int dequeue();
  void display();
};

void Queue::enqueue(int x) {
  if (rear == SIZE - 1) {
    std::cout << "Queue is full\n";
    return;
  }
  if (front == -1) front = 0;  // First element

  a[++rear] = x;
}

int Queue::dequeue() {
  if (front == -1 || front > rear)
   {
    std::cout << "Queue is empty\n";
    return -1;
  }
  
  int item = a[front++];
  
  // Reset front and rear when queue becomes empty
  if (front > rear) front = rear = -1;

  return item;
}

void Queue::display()
 {
  if (front == -1 || front > rear)
   {
    std::cout << "Nothing to display\n";
    return;
  }

  for (int i = front; i <= rear; i++)
   {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;
}

int main()
 {
  Queue q;
  q.enqueue(5);
  q.enqueue(4);
  q.enqueue(3);
  q.enqueue(2);
  q.enqueue(1);
  q.dequeue();
  q.display();  // Should print: 4 3 2 1

  return 0;
}
