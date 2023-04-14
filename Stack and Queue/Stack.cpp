#include <iostream>
#define max 100

using namespace std;

class Stack {
    int top;
    string *stack;

public: 
    Stack() {
        top = 0;
        stack = new string[max];
    }
    
    bool isFull() {
        if (top == max) {
            return true;
        } else {
            return false;
        }
    }
    
    bool isEmpty() {
        if (top == -1) {
            return true;
        } else {
            return false;
        }
    }
    
    void pushStack (string item) {
        if (isFull()) {
            cout << "- Stack Penuh" << endl;
        } else {
            stack[top] = item;
            top++;
            cout << "+ " << item << " item dipush kedalam stack." << endl;
        }
    }
    
    void popStack () {
        if (isEmpty()) {
            cout << "- Stack Kosong" << endl;
        } else {
            top--;
            cout << "- " << stack[top] << " item dipop dari stack." << endl;
            stack[top] = "";
        }
    }
};

int main() {
    Stack stack;
    int choice;
    string item;
    
    do {
        cout << "Menu Pilihan:" << endl;
        cout << "1. Push kedalam stack" << endl;
        cout << "2. Pop dari dalam stack" << endl;
        cout << "3. Keluar" << endl;
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Masukan item untuk di push: ";
                cin >> item;
                stack.pushStack(item);
                break;
            case 2:
                stack.popStack();
                break;
            case 3:
                cout << "Keluar" << endl;
                break;
            default:
                cout << "Error" << endl;
        }
        
        cout << endl;
    } while(choice != 3);
    
    return 0;
}