#include <iostream>
#include <stack>
#include <climits>
using namespace std;

class MinStack {
public:
    stack<long long> st;
    long long min;
    long long val;
    long long n;

    MinStack() {
        val = LLONG_MAX;
    }

    void push(int val) {
        if(st.empty()){
            min = val;
            st.push(val);
        }
        else{
           if(val > min){
                st.push(val);
           }
           else{
                st.push(2LL * val - min);
                min = val;
           }
        }
    }

    void pop() {
        if(st.empty()){
            return;
        }
        else{
            n = st.top();
            st.pop();
            if(n < min){
                min = 2LL * min - n;
            }
        }
    }

    int top() {
        if(st.empty()){
            return -1;
        }
        else{
            n = st.top();
            if(n < min){
                return min;
            }
            else{
                return n;
            }
        }
    }

    int getMin() {
        if(st.empty()){
            return -1;
        }
        return (int)min;
    }
};

int main() {
    MinStack obj;

    obj.push(-2);
    obj.push(0);
    obj.push(-3);

    cout << obj.getMin() << endl;  

    obj.pop();

    cout << obj.top() << endl;     

    cout << obj.getMin() << endl; 

    return 0;
}