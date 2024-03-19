#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
#define MAX_SIZE 6

class CircularQueue {
private:
    char items[MAX_SIZE];
    int front, rear;

public:
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return ((rear + 1) % MAX_SIZE == front);
    }

    void enqueue(char data) {
        if (isFull()) {
            cout << "Queue is full" <<endl;
            return;
        } else if (isEmpty()) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        items[rear] = data;
    }

    char dequeue() {
        char data;
        if (isEmpty()) {
            cout << "Queue is empty" <<endl;
            return '\0';
        } else if (front == rear) {
            data = items[front];
            front = -1;
            rear = -1;
        } else {
            data = items[front];
            front = (front + 1) % MAX_SIZE;
        }
        return data;
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" <<endl;
            return;
        }

        int i = front;
        cout << "Queue: ";
        while (i != rear) {
            cout << items[i] << " ";
            i = (i + 1) % MAX_SIZE;
        }
        cout << items[rear] <<endl;
        getch();
    }
};
int main() {
    CircularQueue q;
    char choice, data;

    do {
        cout << "Choose an operation:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case '1':
                cout << "Enter the character to enqueue: ";
                cin >> data;
                q.enqueue(data);
                break;
            case '2':
                cout << "Dequeued element: " << q.dequeue() <<endl;
                break;
            case '3':
                q.display();
                break;
            case '4':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != '4');

    return 0;
}