class Queue
{
    int *QUEUE, front,rear,size;
    public:
    Queue( int size);
    void display();
   int  dQueue();
     int EnQueue();
     bool IsFull();
     bool IsEmpty();
     ~Queue();
};

