#include <iostream>
using namespace std;
// Define the structure for each node in the linked list
struct Node {
    int data;
    Node* next;
    
    // Constructor to initialize data and next pointer
    Node(int value) : data(value), next(nullptr) {}
};

// Define the LinkedList class
class LinkedList {
private:
    Node* head; // Pointer to the first node
    
public:
    // Constructor to initialize the head pointer
    LinkedList() : head(nullptr) {}
    
    // Function to add a new node at the end of the list
    void append(int value) {
        Node* newNode = new Node(value); // Create a new node with the given value
        
        // If the list is empty, make the new node the head
        if (head == nullptr) {
            head = newNode;
            return;
        }
        
        // Traverse the list to find the last node
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        
        // Attach the new node to the last node
        current->next = newNode;
    }
    
    // Function to display the elements of the list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }
    
    // Destructor to free memory allocated for nodes
    ~LinkedList() {
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {
    // Create a LinkedList object
    LinkedList list;
    
    // Append some elements to the list
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    
    // Display the elements of the list
    cout << "Elements of the list: ";
    list.display();
    
    return 0;
}
