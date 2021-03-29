#include<iostream>
using namespace std;
template <typename T>
class node{
    public:
    T data;
    node<T> * next;
    node(T data){
        this->data=data;
        next=NULL;
    }
};
template <typename T>
class stack{
    private:
    node<T> *head;
    int size;
    public:
    stack(){
        head=NULL;
        size=0;
    }
    int sizeofstack(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    void push(T element){
        node<T> *newnode=new node<T>(element);
        newnode->next=head;
        head=newnode;
        size++;
    }
    T pop(){
        if(sizeofstack()==0){
            return 0;
        }
        T ans= head->data;
        node<T> * temp=head;
        head=head->next;
        delete temp;
        size--;
        return ans;
    }
    T top(){
        if(sizeofstack()==0){
            return 0;
        }
        return head->data;
    }
};
int main()
{
    stack<float> s;
    s.push(20.8);
    s.push(70.6);
    s.push(21.8);
    s.push(24.5);
    s.push(53.4);
    s.push(25.4);
    cout<<s.sizeofstack()<<endl;
    cout<<s.isempty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.sizeofstack()<<endl;
    return 0;
}
