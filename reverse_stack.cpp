#include<iostream>
#include<stack>
using namespace std;

void pushAtBottom(stack<int> &s,int no){
    if(s.empty()){
        s.push(no);
        return;
    }
    ///Otherwise !
    int t = s.top();
    s.pop();
    pushAtBottom(s,no);
    s.push(t);
}

void reverse(stack<int> &s){
    ///Base Case
    if(s.size()==0){
        return;
    }

    ///Normal Case
    int top = s.top();
    s.pop();
    reverse(s);
    pushAtBottom(s,top);


}
void print(stack<int> s){

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}

int main(){

    stack<int> s;
    int n;
    int z;
    cin>>n;
    for(int i=1;i<=n;i++){
        {cin>>z;
            s.push(z);}
    }
   print(s);
    reverse(s);
    print(s);



return 0;
}
