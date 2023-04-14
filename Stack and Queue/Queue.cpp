#include <iostream>
using namespace std;

class Queue{
private:
    int front, rear;
    int size;
    int *queue;
public:
    Queue(int size){
        front = rear = -1;
        this->size = size;
        queue = new int[size];
    }

    bool isFull(){
        return (rear == size-1);
    }

    bool isEmpty(){
        return (front == -1 || front > rear);
    }

    void enqueue(int data){
        if (isFull()){
            cout << "Queue Penuh!" << endl;
            return;
        }else{
            queue[++rear] = data;
            if (front == -1)
                front = 0;
            cout << "Enqueued: " << data << endl;
        }
    }

    void dequeue(){
        if (isEmpty()){
            cout << "Queue Kosong!" << endl;
            return;
        }else{
            cout << "Dequeued: " << queue[front] << endl;
            front++;
        }
    }
};

int main(){
    int size, choice, data;
    cout << "Masukan Ukuran queue: ";
    cin >> size;
    Queue q(size);
    while (1){
        cout << "\n\nMenu Queue\n";
        cout << "1.Enqueue\n";
        cout << "2.Dequeue\n";
        cout << "3.Keluar\n";
        cout << "Masukan Pilihan: ";
        cin >> choice;
        switch(choice){
            case 1:
                cout << "Masukan data untuk dienqueue: ";
                cin >> data;
                q.enqueue(data);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}