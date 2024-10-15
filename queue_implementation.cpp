#include <iostream>
using namespace std;

#define MAX 5 // Maximum size of the queue

class Queue {
    int front, rear;
    int arr[MAX]; 
    
public:
    Queue() { front = -1; rear = -1; } 
    
    void insert(int x) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow!" << endl;
        } else {
            if (front == -1) front = 0;
            arr[++rear] = x;
            cout << x << " inserted into the queue." << endl;
        }
    }
    
    void remove() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
        } else {
            cout << arr[front++] << " deleted from the queue." << endl;
        }
    }
    
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            for (int i = front; i <= rear; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Queue queue;
    int choice, value;
    
    while (true) {
        cout << "\nMenu:\n1. Insert\n2. Delete\n3. Display\n4. Exit\nEnter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                queue.insert(value);
                break;
                
            case 2:
                queue.remove();
                break;
                
            case 3:
                queue.display();
                break;
                
            case 4:
                cout << "Exiting..." << endl;
                exit(0);
                
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    
    return 0;
}
