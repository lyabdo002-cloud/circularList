#include <iostream>
using namespace std;

struct Node {
    int value;
    Node* next;
};

Node* head = NULL;

// ÅÏÑÇÌ Ýí ÇáÈÏÇíÉ
void insertAtBeginning(int data) {
    Node* newNode = new Node();
    newNode->value = data;
    newNode->next = head;
    head = newNode;
}

// ÅÏÑÇÌ Ýí ÇáäåÇíÉ
void insertAtEnd(int data) {
    Node* newNode = new Node();
    newNode->value = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// ÅÏÑÇÌ ÈÚÏ ÞíãÉ ãÚíäÉ (Ýí ÇáãäÊÕÝ)
void insertInMiddle(int afterValue, int data) {
    Node* temp = head;
    while (temp != NULL && temp->value != afterValue) {
        temp = temp->next;
    }
    if (temp == NULL) {
        cout << "Value " << afterValue << " not found!" << endl;
        return;
    }
    Node* newNode = new Node();
    newNode->value = data;
    newNode->next = temp->next;
    temp->next = newNode;
}

// ÚÑÖ ÇáÞÇÆãÉ
void displayNode() {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    insertAtEnd(10);
    insertAtEnd(30);
    insertAtBeginning(5);
    insertInMiddle(10, 20);

    displayNode();

    return 0;
}
