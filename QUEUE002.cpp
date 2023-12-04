#include <bits/stdc++.h>
using namespace std;
void check(string student,string sandwich){
    queue<char> stu;
    stack<char> sand;
    for(char x: student){
        if(isdigit(x)) stu.push(x);
    }
    for(char x: sandwich){
        if(isdigit(x)) sand.push(x);
    }
    long long res=0;
    while(res!=stu.size()){
        if(stu.front()==sand.top()){
            stu.pop();
            sand.pop();
        }
        else{
            res++;
            stu.push(stu.front());
            stu.pop();
        }
    }
    cout<< res-1 <<endl;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        string student,sandwich;
        getline(cin,student);
        getline(cin,sandwich);
        check(student,sandwich);
    }
}