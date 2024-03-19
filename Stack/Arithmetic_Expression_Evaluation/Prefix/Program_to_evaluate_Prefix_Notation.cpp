#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

bool isNumeric(char c) {
    return (c >= '0' && c <= '9');
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

double evaluatePrefix(const string& expression) {
    stack<double> operandStack;

    for (int i = expression.size() - 1; i >= 0; --i) {
        char c = expression[i];
        if (c == ' ') {
            continue;
        } else if (isNumeric(c)) {
            string operand;
            while (isNumeric(c) || c == '.') {
                operand = c + operand;
                if (i == 0)
                    break;
                c = expression[--i];
            }
            operandStack.push(stod(operand));
        } else if (isOperator(c)) {
            double operand1 = operandStack.top();
            operandStack.pop();
            double operand2 = operandStack.top();
            operandStack.pop();
            double result = performOperation(c, operand1, operand2);
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
    cout << "Enter the prefix expression: ";
    getline(cin, expression);

    double result = evaluatePrefix(expression);
    cout << "Result: " << result << endl;

    return 0;
}
