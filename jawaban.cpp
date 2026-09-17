#include<iostream>
using namespace std;

// definisikan node
struct Node {
    int data;
    Node* next;
};

int main() {
    // membuat 10 node awal sesuai soal
    Node* node1 = new Node();
    node1->data = 100;
    node1->next = nullptr;

    Node* node2 = new Node();
    node2->data = 92;
    node2->next = nullptr;

    Node* node3 = new Node();
    node3->data = 45;
    node3->next = nullptr;

    Node* node4 = new Node();
    node4->data = 87;
    node4->next = nullptr;

    Node* node5 = new Node();
    node5->data = 71;
    node5->next = nullptr;

    Node* node6 = new Node();
    node6->data = 99;
    node6->next = nullptr;

    Node* node7 = new Node();
    node7->data = 95;
    node7->next = nullptr;

    Node* node8 = new Node();
    node8->data = 60;
    node8->next = nullptr;

    Node* node9 = new Node();
    node9->data = 55;
    node9->next = nullptr;

    Node* node10 = new Node();
    node10->data = 88;
    node10->next = nullptr;

    // menghubungkan node-node
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node7;
    node7->next = node8;
    node8->next = node9;
    node9->next = node10;

    // head dan tail
    Node* head = node1;
    Node* tail = node10;

    // menampilkan isi linked list awal
    cout << "Linked List Awal: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl << endl;

    //nambahin 70 di depan
    Node* nodeDepan = new Node();
    nodeDepan->data = 70;
    nodeDepan->next = head;
    head = nodeDepan;

    cout << "Setelah menambahkan 70 di depan: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl << endl;

    // nambahin 50 di belakang
    Node* nodeBelakang = new Node();
    nodeBelakang->data = 50;
    nodeBelakang->next = nullptr;

    tail->next = nodeBelakang;
    tail = nodeBelakang;

    cout << "Setelah menambahkan 50 di belakang: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl << endl;

    // namhkan 0 setelah 45
    temp = head;
    while (temp->data != 45) {
        temp = temp->next;
    }

    Node* nodeTengah = new Node();
    nodeTengah->data = 0;
    nodeTengah->next = temp->next;
    temp->next = nodeTengah;

    cout << "Setelah menambahkan 0 setelah 45: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl << endl;

    // hapus 99
    temp = head;
    while (temp->next->data != 99) {
        temp = temp->next;
    }
        
    Node* hapus = temp->next;
    temp->next = hapus->next;
    delete hapus;

    cout << "Setelah menghapus 99: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl << endl;

    // hapus 60
    temp = head;
    while (temp->next->data != 60) {
        temp = temp->next;
    }
        
    hapus = temp->next;
    temp->next = hapus->next;
    delete hapus;

    cout << "Setelah menghapus 60: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}
