#include<iostream>
using namespace std;
class stack{
    private:
    int *data;
    int index;
    int length;
    public:
    stack(){
        int *data=new int[4];
        length = 4;
        index=0;
    }
    int size(){
        return index;
    }
    bool isempty(){
        return index==0;
    }
    void push(int element){
        if(index==length){
            int *newdata = new int[2*length];
            for(int i =0;i<length;i++){
                newdata[i]=data[i];
            }
            delete []data;
            length *=2;
            data=newdata;
        }
        data[index]=element;
        index++;
    }
    int pop(){
        if(size()==0){
            cout<<"stack is empty"<<endl;
        }
        index--;
        return data[index];
    }
    int top(){
        if(size()==0){
            cout<<"stack is empty"<<endl;
        }
        return data[index-1];
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    cout<<s.size()<<endl;
    cout<<s.isempty()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    return 0;
}
