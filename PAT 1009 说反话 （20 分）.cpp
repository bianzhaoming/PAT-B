


#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<string> v;
    string s;
    while(cin >> s) v.push(s);//入站
    cout << v.top();//站顶
    v.pop();//弹出站顶
    while(!v.empty()) {
        cout << " " << v.top();
        v.pop();
    }
    return 0;
}

