#include<iostream>
using namespace std;
const int MAX = 5;
class queue
{
    private:
    int a[MAX];
    int front;
    int rear;
    public:
    queue()
    {
        front=-1;
        rear=-1;
    }
    int empty(void)
    {
        if(front==-1 && rear==-1)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    int full(void)
    {
        if(rear==MAX-1)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    void enqueue(int x)
    {
        if(full())
        {
            cout<<"\n queue is full";
            return;
        }
        if(front == -1 && rear == -1)
        {
            front++;
            rear++;
        }
        else
        {
            rear++;
        }
        a[rear]=x;

        
    }
    int dequeue(void)
    {
        if(empty())
        {
            cout<<"\n queue is empty";
            return-1;
        }
        int x = a[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
         front++;
        }
        return x;
    }
    int peek(void)
    {
        if(empty())
        {
            cout<<"\n queue is empty";
            return -1;
        }
        return a[front];

    }
    void display(void)
    {
        if(empty())
        {
            cout<<"\n queue is empty";
            return;
        }
        cout<<"\n queue elements :";
        for(int i=front;i<=rear;i++)
        {
            cout<<"\t"<<a[i];
        }
    }

};
int main()
{
    int x;
    queue q;
    q.enqueue(57);
     q.enqueue(25);
      q.enqueue(31);
      q.enqueue(89);
      q.enqueue(67);
      q.display();
      if(!q.empty())
      {
        x=q.dequeue();
        cout<<"\nremoved:"<<x;
      }
      q.display();
      x=q.peek();
      cout<<"\nfront element is :"<<x;
      return 0;    
}

> cd "d:\Swarupa44\" ; if ($?) { g++ queueusingarray.cpp -o queueusingarray } ; if ($?) { .\queueusingarray }

 queue elements :       57      25      31      89      67
removed:57
 queue elements :       25      31      89      67
front element is :25
PS D:\Swarupa44> 
