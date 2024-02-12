#include<iostream>
using namespace std;

class Node {
public:
    Node* next;
    Node* prev;
    int val;

    Node(int val) {
        this->val = val;
        next = nullptr;
        prev = nullptr;
    }
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;
    int size;

    DoublyLinkedList() {
        size = 0;
        head = nullptr;
        tail = nullptr;
    }

    void insertAtHead(int val) {
        Node* newNode = new Node(val);
        if (size == 0) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
        size++;
    }

    void insertElementAtIdx(int val, int idx) {
        if (idx == 0) {
            insertAtHead(val);
        }
        else if (idx > size || idx < 0) {
            cout << "Invalid index" << endl;
        }
        else if (idx == size) {
            Node* newNode = new Node(val);
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
            size++;
        }
        else {
            Node* newNode = new Node(val);
            Node* temp = head;
            for (int i = 0; i < idx - 1; i++) {
                temp = temp->next;
            }
            newNode->next = temp->next;
            newNode->prev = temp;
            temp->next->prev = newNode;
            temp->next = newNode;
            size++;
        }
    }

    void removeHead() {
        if (size == 0) {
            cout << "Linked list is empty" << endl;
            return;
        }
        head = head->next;
        if (head) {
            head->prev = nullptr;
        }
        size--;
    }

    void removeElementAtIdx(int idx) {
        if (idx < 0 || idx >= size) {
            cout << "Invalid index" << endl;
            return;
        }
        else if (idx == 0) {
            removeHead();
        }
        else {
            Node* temp = head;
            for (int i = 0; i < idx; i++) {
                temp = temp->next;
            }
            temp->prev->next = temp->next;
            if (temp->next) {
                temp->next->prev = temp->prev;
            }
            delete temp;
            size--;
        }
    }

    Node* getElement(int x) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->val == x) return temp;
            temp = temp->next;
        }
        cout << "Element " << x << " is not an element of the linked list" << endl;
        return nullptr;
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList l;
    l.insertElementAtIdx(4, 0);
    l.insertElementAtIdx(5, 0);
    l.insertElementAtIdx(6, 1);
    l.insertElementAtIdx(7, 1);
    l.insertElementAtIdx(4, 3);
    l.display();
    l.insertAtHead(10);
    l.display();
    l.head = l.getElement(7);
    l.display();
    l.removeElementAtIdx(1);
    l.removeHead();
    l.display();

    return 0;
}
