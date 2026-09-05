#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> st;                  //main original stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout<<endl<<"current top :"<<st.top()<<endl;
    cout<<"deleting item at top :"<<endl;
    st.pop();
    cout<<"new top :"<<st.top()<<endl;

    //copying stack to a new stack


    stack<int> temp = st;                   //making a stack temp just to show what st contains , because there is no other way to show each element, we need to pop() the stack each element just to iterate it is called tradeoff  and that why making a copy of stack st in temp and sacrificing it.
    cout<<endl<<"st before :"<<endl;
    while(!temp.empty()){                   //showing the entire stack st by making a copy of it "temp" and sacrifising it.
        cout<<temp.top()<<" ";
        temp.pop();
    }
    
    stack<int> st1;                         //made a stack st1 just to swap st elements with it.


    cout<<endl<<"st1 before: "<<endl;
    stack<int> tempoST1 = st1;              //making copy os st1 stack as tempoST1 just to show the elements present.
    
    while(!tempoST1.empty()){
        cout<<tempoST1.top()<<" ";
        tempoST1.pop();
    }

    cout<<endl<<"swapping st and st1 :"<<endl;

    st1.swap(st);               //swapping two stacks


    stack<int> tempST1 = st1;                    //making copy os st1 stack as tempST1 just to show the elements present.
    
    cout<<endl<<"st1 after :"<<endl;
    while(!tempST1.empty()){
        cout<<tempST1.top()<<" ";
        tempST1.pop();
    }

    cout<<endl<<"st after: "<<endl;
    stack<int> temp2 = st;                         //showing the entire stack st by making a copy of it "temp2" and sacrifising it.                        
    while(!temp2.empty()){
        cout<<temp2.top()<<" ";
        temp2.pop();
    }

    //only we can use size() and empty() functions apart from push,pop,top.

    
    st1.swap(st);
    return 0;
}