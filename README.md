# Queue Implementation Using Array

**Experiment 19**

## Aim  
To study and implement Queue using an array with menu-driven options.

## Theory  
### Definition  
#### What is a Queue?
- A **Queue** is a linear data structure that follows the **FIFO** (First In First Out) principle.
  - **Insert (Enqueue)**: Adds an element to the end of the queue.
  - **Delete (Dequeue)**: Removes an element from the front of the queue.
  - **isEmpty**: Checks if the queue is empty.
  - **isFull**: Checks if the queue is full.

- Queues are widely used in scenarios such as scheduling algorithms, buffering, and handling asynchronous data (e.g., message queues).

### Operations:
1. **Insert**: Adds an element to the rear of the queue if it's not full.
2. **Delete**: Removes an element from the front of the queue if it's not empty.
3. **Display**: Displays all elements in the queue.

> For example, here’s a simple queue implementation using an array in C++:

```cpp
#include <iostream>
using namespace std;

#define MAX 5 // Maximum size of the queue

class Queue {
    int front, rear;
    int arr[MAX]; // Array to store queue elements
    
public:
    Queue() { front = -1; rear = -1; } // Constructor to initialize the queue
    
    // Function to insert an element into the queue
    void insert(int x) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow!" << endl;
        } else {
            if (front == -1) front = 0;
            arr[++rear] = x;
            cout << x << " inserted into the queue." << endl;
        }
    }
    
    // Function to delete an element from the queue
    void remove() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow!" << endl;
        } else {
            cout << arr[front++] << " deleted from the queue." << endl;
        }
    }
    
    // Function to display the queue
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
```
## Conclusion 
In this experiment we learned about Queue implementation using arrays with menu options for Insert, Delete, Display, and Exit.





