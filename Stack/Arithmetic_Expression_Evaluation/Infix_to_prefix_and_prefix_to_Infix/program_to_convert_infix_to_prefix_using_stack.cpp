#include <iostream>
#include <stack>
#include <string>
#include <algorithm> // for std::reverse

using namespace std;

// Function to check if a character is an operator
bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to get the precedence of an operator
int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

// Function to convert infix expression to prefix
string infixToPrefix(const string& infix) {
    stack<char> s;
    string prefix;

    // Reverse the infix expression
    string reversedInfix = infix;
    reverse(reversedInfix.begin(), reversedInfix.end());

    for (char c : reversedInfix) {
        if (isalnum(c)) {
            prefix += c;  // Add operands to the output
        } else if (c == ')') {
            s.push(')');
        } else if (c == '(') {
            while (!s.empty() && s.top() != ')') {
                prefix += s.top();
                s.pop();
            }
            s.pop(); // Pop ')' from stack
        } else { // Operator encountered
            while (!s.empty() && precedence(s.top()) > precedence(c)) {
                prefix += s.top();
                s.pop();
            }
            s.push(c);
        }
    }

    // Pop remaining operators from the stack
    while (!s.empty()) {
        prefix += s.top();
        s.pop();
    }

    // Reverse the result to get the prefix expression
    reverse(prefix.begin(), prefix.end());

    return prefix;
}

int main() {
    string infixExpression;
    cout << "Enter the infix expression: ";
    getline(cin, infixExpression);

    string prefixExpression = infixToPrefix(infixExpression);
    cout << "Prefix expression: " << prefixExpression << endl;

    return 0;
}
