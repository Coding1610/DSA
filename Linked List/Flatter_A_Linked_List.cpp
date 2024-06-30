#include<bits/stdc++.h>
using namespace std;

/*
 * Definition for linked list.
 * class Node {
 *  public:
 *		int data;
 *		Node *next;
 * 		Node *child;
 *		Node() : data(0), next(nullptr), child(nullptr){};
 *		Node(int x) : data(x), next(nullptr), child(nullptr) {}
 *		Node(int x, Node *next, Node *child) : data(x), next(next), child(child) {}
 * };
 */

/* 

Node* merge (Node* left, Node* right) {

	// Base Case
	if( left == NULL && right == NULL ){
		return NULL;
	}
	
	if( left == NULL ){
		return right;
	}

	if( right == NULL ){
		return left;
	}

	Node* ans = new Node(-1);
	Node* temp = ans;

	while( left != NULL && right != NULL ){

		if( left -> data <= right -> data ){
			temp -> child = left;
			temp = left;
			left = left -> child;
		}
		else{
			temp -> child = right;
			temp = right;
			right = right -> child;
		}

	}

	while( left != NULL ){
		temp -> child = left;
		temp = left;
		left = left -> child;
	}

	while( right != NULL ){
		temp -> child = right;
		temp = right;
		right = right -> child;
	}

	return ans -> child;

}

Node *flattenLinkedList(Node *head){

	// Base Case
	if( head == NULL || head -> next == NULL ){
		return  head;	
	}
	// Create a 1st LL
	Node* down = head;

	// Create a 2nd LL
	Node* right = flattenLinkedList(head -> next);
	head -> next = NULL ;

	// Merge Both LL
	Node* result = merge( down , right );

	// ANS
	return result;

}

*/