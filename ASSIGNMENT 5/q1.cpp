#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {
    Node* head;

public:
    SinglyLinkedList() { head = NULL; }

    // (a) Insert at beginning
    void insertAtBeginning(int val) {
        Node* newNode = new Node{val, head};
        head = newNode;
    }

    // (b) Insert at end
    void insertAtEnd(int val) {
        Node* newNode = new Node{val, NULL};
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) temp = temp->next;
        temp->next = newNode;
    }

    // (c) Insert before/after a specific node value
    void insertBefore(int target, int val) {
        if (head == NULL) return;
        if (head->data == target) {
            insertAtBeginning(val);
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->data != target)
            temp = temp->next;
        if (temp->next == NULL) {
            cout << "Value " << target << " not found.\n";
            return;
        }
        Node* newNode = new Node{val, temp->next};
        temp->next = newNode;
    }

    void insertAfter(int target, int val) {
        Node* temp = head;
        while (temp && temp->data != target)
            temp = temp->next;
        if (temp == NULL) {
            cout << "Value " << target << " not found.\n";
            return;
        }
        Node* newNode = new Node{val, temp->next};
        temp->next = newNode;
    }

    // (d) Delete from beginning
    void deleteBeginning() {
        if (head == NULL) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    // (e) Delete from end
    void deleteEnd() {
        if (head == NULL) return;
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        while (temp->next->next) temp = temp->next;
        delete temp->next;
        temp->next = NULL;
    }

    // (f) Delete specific node
    void deleteValue(int val) {
        if (head == NULL) return;
        if (head->data == val) {
            deleteBeginning();
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->data != val)
            temp = temp->next;
        if (temp->next == NULL) {
            cout << "Value not found.\n";
            return;
        }
        Node* del = temp->next;
        temp->next = temp->next->next;
        delete del;
    }

    // (g) Search for a node
    void search(int val) {
        int pos = 1;
        Node* temp = head;
        while (temp) {
            if (temp->data == val) {
                cout << "Value found at position " << pos << "\n";
                return;
            }
            temp = temp->next;
            pos++;
        }
        cout << "Value not found.\n";
    }

    // (h) Display
    void display() {
        if (head == NULL) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main() {
    SinglyLinkedList list;
    int choice, val, target;

    do {
        cout << "\n--- Singly Linked List Menu ---\n";
        cout << "1. Insert at Beginning\n2. Insert at End\n3. Insert Before Value\n4. Insert After Value\n";
        cout << "5. Delete from Beginning\n6. Delete from End\n7. Delete Specific Value\n8. Search\n9. Display\n10. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: cout << "Enter value: "; cin >> val; list.insertAtBeginning(val); break;
            case 2: cout << "Enter value: "; cin >> val; list.insertAtEnd(val); break;
            case 3: cout << "Enter target and value: "; cin >> target >> val; list.insertBefore(target, val); break;
            case 4: cout << "Enter target and value: "; cin >> target >> val; list.insertAfter(target, val); break;
            case 5: list.deleteBeginning(); break;
            case 6: list.deleteEnd(); break;
            case 7: cout << "Enter value to delete: "; cin >> val; list.deleteValue(val); break;
            case 8: cout << "Enter value to search: "; cin >> val; list.search(val); break;
            case 9: list.display(); break;
            case 10: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 10);

    return 0;
}