#include<iostream>
using namespace std;
const int MAX=5;
class Stack {
    private:
    int a[MAX];
    int top;
    public:
    Stack(){
        top=-1;
    };
    void push(int x){
        top++;
        a[top]=x;
    }
    int pop(void)
    {
        int x;
        x=a[top];
        top--;
        return x;
    }
    int peek(void)
    {
        return a[top];
    }
    int full(void)
    {
        if(top==MAX-1)
            return 1;
        else
            return 0;
    }

    int empty(void)
    {
        if(top==-1)
            return 1;
        else
            return 0;
    }

void display(void)
{
    for (int i=top;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }
}

};
int main()
{
    int x;
    Stack s;
    if(!s.full()) s.push(24);
     if(!s.full()) s.push(68);
      if(!s.full()) s.push(58);
       if(!s.full()) s.push(90);
        if(!s.full()) s.push(91);
         if(!s.full()) s.push(94);
        
        

    cout << "Stack elements: ";
    s.display();
    if(!s.empty())
    {
        x=s.pop();
        cout<<endl<<"Removed: "<<x;
    }
    cout<<endl<<"Stack after pop:";
    s.display();
    if(!s.empty())
    {
        x=s.peek();
        cout<<endl<<"Top element: "<<x;
        
    }
    return 0;
}

> cd "d:\Swarupa44\" ; if ($?) { g++ Stack.cpp -o Stack } ; if ($?) { .\Stack }
Stack elements: 91 90 58 68 24 
Removed: 91
Stack after pop:90 58 68 24 
Top element: 90
PS D:\Swarupa44> 






    