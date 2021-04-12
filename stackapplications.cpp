#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<char> s;
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        (str[i]=='(' || str[i]=='{' || str[i]=='[' ) ? s.push(str[i]) : s.pop() ;
    }
    if(s.size()==0)
    cout<<"parenthesis correct";
    else 
    cout<<"parenthesis not correct";

    return 0;
}