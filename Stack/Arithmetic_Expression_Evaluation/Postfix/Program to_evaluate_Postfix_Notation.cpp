#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

double performOperation(char operation, double operand1, double operand2) {
    switch(operation) {
        case '+':
            return operand1 + operand2;
        case '-':
            return operand1 - operand2;
        case '*':
            return operand1 * operand2;
        case '/':
            if (operand2 != 0)
                return operand1 / operand2;
            else {
                cerr << "Error: Division by zero\n";
                exit(EXIT_FAILURE);
            }
        case '^':
            return pow(operand1, operand2);
        default:
            cerr << "Error: Invalid operator\n";
            exit(EXIT_FAILURE);
    }
}

double evaluatePostfix(const string& expression) {
    stack<double> operandStack;

    istringstream iss(expression);
    string token;

    while (iss >> token) {
        if (isdigit(token[0])) {
            operandStack.push(stod(token));
        } else if (isOperator(token[0])) {
            double operand2 = operandStack.top();
            operandStack.pop();
            double operand1 = operandStack.top();
            operandStack.pop();
            double result = performOperation(token[0], operand1, operand2);
            operandStack.push(result);
        } else {
            cerr << "Error: Invalid character in expression\n";
            exit(EXIT_FAILURE);
        }
    }

    if (!operandStack.empty()) {
        double result = operandStack.top();
        operandStack.pop();
        return result;
    } else {
        cerr << "Error: Expression is empty\n";
        exit(EXIT_FAILURE);
    }
}

int main() {
    string expression;
    cout << "Enter the postfix expression: ";
    getline(cin, expression);

    double result = evaluatePostfix(expression);
    cout << "Result: " << result << endl;

    return 0;
}
