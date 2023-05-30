#include <iostream>
#include "BinaryTree.h"

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree bin;
	
	bin.insertNode(100);
	bin.insertNode(78);
	bin.insertNode(65);
	bin.insertNode(12);
	bin.insertNode(97);
	bin.insertNode(43);
	bin.insertNode(25);
	bin.insertNode(33); 
    
	bin.inOrder();
	cout << endl;
	bin.preOrder();
	cout << endl;
	bin.postOrder();
	cout << endl; 
	
	bin.findMax();
	bin.findMin();
	
	bin.searchNode(10);
	bin.searchNode(12); 
	return 0;
}