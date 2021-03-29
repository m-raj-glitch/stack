#include<iostream>
using namespace std;
template <typename T>
class stack{
    T * data;
    int index;
    int length;
    public:
    stack(){
        T *data=new T[4];
        index=0;
        length=4;
    }  
    int size(){
        return index;
    }
    bool isempty(){
        return index==0;
    }
    void push(T element){
        if(size()==length){
            T *newdata=new T[2*length];
            for(int i=0;i<length;i++){
                newdata[i]=data[i];
            }
            length*=2;
        }
        data[index]=element;
        index++;
    }
    T pop(){
        if(size()==0){
            cout<<"stack is empty"<<endl;
        }
        index--;
        return data[index];
    }
    T top(){
        if(size()==0){
            cout<<"stack is empty"<<endl;
        }
        return data[index-1];
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
    cout<<s.size()<<endl;
    cout<<s.isempty()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    return 0;
}
