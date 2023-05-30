#include <iostream>
#include "BinaryTree.h"

using namespace std;

void BinaryTree::insertNode(int insertVal){
	root = insertNodeRecursive(root, insertVal);
}

Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertValue){
	if (currentRoot==NULL){
		currentRoot = new Node();
		currentRoot->val = insertValue;
		return currentRoot;
	}
	
	if (insertValue < currentRoot->val){
		currentRoot->left = insertNodeRecursive(currentRoot->left, insertValue);
	}
	
	else if (insertValue > currentRoot->val){
		currentRoot->right = insertNodeRecursive(currentRoot->right, insertValue);
	}
	
	return currentRoot;
}

void BinaryTree::inOrder(){
	inOrderRecursive(root);
}

void BinaryTree::inOrderRecursive(Node* currentRoot){
	if (currentRoot!=NULL){
		inOrderRecursive(currentRoot->left);
		cout << currentRoot->val << ", ";
		inOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::preOrder(){
    preOrderRecursive(root);
}

void BinaryTree::preOrderRecursive(Node* currentRoot){
	if (currentRoot!=NULL){
		cout << currentRoot->val << ", ";
		preOrderRecursive(currentRoot->left);
		preOrderRecursive(currentRoot->right);
	}
}

void BinaryTree::postOrder(){
	postOrderRecursive(root);
} 

void BinaryTree::postOrderRecursive(Node* currentRoot){
	if (currentRoot!=NULL){
		postOrderRecursive(currentRoot->left);
		postOrderRecursive(currentRoot->right);
		cout << currentRoot->val << ", ";
	}
 }
 
Node *BinaryTree::findMinRecursive(Node* currentRoot) {
    if (currentRoot->left != NULL) {
        findMinRecursive(currentRoot->left);
    } 
	else{
        cout << "Minimum value : " << currentRoot->val << endl;
    }
    return currentRoot;
}

Node *BinaryTree::findMaxRecursive(Node* currentRoot) {
    if (currentRoot->right != NULL) {
        findMaxRecursive(currentRoot->right);
    } 
	else{
        cout << "Maximum value : " << currentRoot->val << endl;
    }
    return currentRoot;
}  

Node *BinaryTree::findMin() {
    findMinRecursive(root);
    return root;
}

Node *BinaryTree::findMax() {
    findMaxRecursive(root);
    return root;
} 

void *BinaryTree::searchNode(int Val) {
    return searchNodeRecursive(root, Val);
}

Node* BinaryTree::searchNodeRecursive(Node* currentRoot, int Val) {
    if (currentRoot == nullptr){
    	cout << "The Node doesn't exist in the binary tree" << endl;
	} 
	else if(currentRoot->val == Val){
		cout << "Node " << currentRoot->val << " is exist" << endl;
	}
	else if(currentRoot->val == Val){
		currentRoot->left = searchNodeRecursive(currentRoot->left, Val);
	}
    else if(Val < currentRoot->val){
        currentRoot->left = searchNodeRecursive(currentRoot->left, Val);
    }
    else{
    	currentRoot->right = searchNodeRecursive(currentRoot->right, Val);
	}
	return currentRoot;
}