#include <iostream>
#include <string>
using namespace std;
#define MAX 100

class Stack {
    char arr[MAX];
    int top;
public:
    Stack() { top = -1; }
    void push(char c) { arr[++top] = c; }
    char pop() { return arr[top--]; }
    bool isEmpty() { return top == -1; }
};

int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;

    Stack s;
    for (char c : str) s.push(c);

    cout << "Reversed: ";
    while (!s.isEmpty()) cout << s.pop();
    cout << endl;
    return 0;
}
