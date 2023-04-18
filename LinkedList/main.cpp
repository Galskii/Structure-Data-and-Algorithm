#include <iostream>
#include "LinkedList.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	LinkedList lk1;
	
	lk1.insertToHead(1);
	lk1.insertToHead(2);
	lk1.insertToHead(3);
	lk1.insertToTail(4);
	lk1.deleteByValue(2);
	lk1.printAll();
	
	return 0;
}