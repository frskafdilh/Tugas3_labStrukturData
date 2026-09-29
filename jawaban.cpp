#include <iostream>
using namespace std;
#define MAX 10 

int main() {
    char stack[MAX]; 
    int top = -1;

    // Push
    top++; stack[top] = 'f';
    top++; stack[top] = 'r';
    top++; stack[top] = 'i';
    top++; stack[top] = 's';
    top++; stack[top] = 'k';
    top++; stack[top] = 'a';

    cout << "Isi Stack : ";
    for (int i = top; i >= 0; i--){
        cout << stack[i] << " ";
    }
    cout << endl;

    // Top
    cout << "Top : " << stack[top] << endl;

    // Size
    cout << "Size : " << top + 1 << endl;

    // IsEmpty
    if (top == -1)
        cout << "Stack Kosong" << endl;
    else
        cout << "Stack Tidak Kosong" << endl;

    // Pop 
    cout << "Kata setelah dibalik : ";
    while (top != -1) {
        cout << stack[top];
        top--; 
    }
    cout << endl;

    return 0;
}
