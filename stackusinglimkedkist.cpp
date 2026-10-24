#include<iostream>
using namespace std;
class node{
    
    public:
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
class stack {
    
    node* top;
    public:
    stack()
    {
        top=NULL;
    }
    int empty(){
        if(top==NULL)
            return 1;
        else
            return 0;
    }
    void push(int x)
    {
        node* p = new node(x);
        p->next = top;
        top = p;
    }

    int pop()
    {
        if (empty())
            return -1;

        node* p = top;
        int x = p->data;
        top = top->next;
        delete p;
        return x;
    }
    int peek(){
        return top->data;
    }
    void display(){
        node* q = top;
        while(q!=NULL)
        {
            cout << q->data << " ";
            q=q->next;
        }
    }
};
int main(){
    int x;
    stack s;
    s.push(24);
    s.push(68);
    s.push(58);
    s.push(77);
    s.push(45);
    s.push(34);
    s.display();
    if(!s.empty())
    {
        x=s.pop();
        cout<<endl << "Removed: "<<x;

    }
    s.display();
    if(!s.empty())
    x=s.peek();
    cout<<"\n <<Top element is : "<<x; 
    return 0;
}

PS D:\Swarupa44>                                                                                      
               > cd "d:\Swarupa44\" ; if ($?) { g++ Stack_.cpp -o Stack_ } ; if ($?) { .\Stack_ }
34 45 77 58 68 24 
Removed: 34
        45  77 58 68 24
 <<Top element is : 45
PS D:\Swarupa44> 

