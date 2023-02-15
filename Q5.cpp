#include<iostream>
#include<vector>
using namespace std;
struct Node {
	int val;
	struct Node* Holder;
	Node() {
		val = 1;
		Holder = NULL;
	}
};
struct Digit {
	struct Node* Top_Left;
	struct Node* Top_Right;
	struct Node* Medium_Up;
	struct Node* Medium_Mid;
	struct Node* Medium_Down;
	struct Node* Bottom_Left;
	struct Node* Bottom_Right;
	Digit() {
		Top_Left = NULL;
		Top_Right = NULL;
		Medium_Up = NULL;
		Medium_Mid = NULL;
		Medium_Down = NULL;
		Bottom_Left = NULL;
		Bottom_Right = NULL;
	}
};
void Print_A_Number(int x) {

	Digit* The_Digit = new Digit();
	
	if (x == 0) {
		The_Digit->Medium_Up = new Node();
		The_Digit->Top_Left = new Node();
		The_Digit->Top_Right = new Node();
		The_Digit->Bottom_Left = new Node();
		The_Digit->Bottom_Right = new Node();
		The_Digit->Medium_Down = new Node();
	}
	else if (x == 1) {
		The_Digit->Top_Right = new Node();
		The_Digit->Bottom_Right = new Node();
	}
	else if (x == 2) {
		The_Digit->Medium_Up = new Node();
		The_Digit->Medium_Mid = new Node();
		The_Digit->Medium_Down = new Node();
		The_Digit->Top_Right = new Node();
		The_Digit->Bottom_Left = new Node();
	}
	else if (x == 3) {
		The_Digit->Medium_Up = new Node();
		The_Digit->Medium_Mid = new Node();
		The_Digit->Medium_Down = new Node();
		The_Digit->Top_Right = new Node();
		The_Digit->Bottom_Right = new Node();
	}
	else if (x == 4) {
		The_Digit->Medium_Mid = new Node();
		The_Digit->Top_Right = new Node();
		The_Digit->Top_Left = new Node();
		The_Digit->Bottom_Right = new Node();
	}
	else if (x == 5) {
		The_Digit->Medium_Up = new Node();
		The_Digit->Medium_Mid = new Node();
		The_Digit->Medium_Down = new Node();
		The_Digit->Top_Left = new Node();
		The_Digit->Bottom_Right = new Node();
	}
	else if (x == 6) {
		The_Digit->Medium_Up = new Node();
		The_Digit->Medium_Mid = new Node();
		The_Digit->Medium_Down = new Node();
		The_Digit->Top_Left = new Node();
		The_Digit->Bottom_Right = new Node();
		The_Digit->Bottom_Left = new Node();
	}
	else if (x == 7) {
		The_Digit->Medium_Up = new Node();
		The_Digit->Top_Right = new Node();
		The_Digit->Bottom_Right = new Node();
	}
	else if (x == 8) {
		The_Digit->Medium_Up = new Node();
		The_Digit->Medium_Mid = new Node();
		The_Digit->Medium_Down = new Node();
		The_Digit->Top_Left = new Node();
		The_Digit->Bottom_Right = new Node();
		The_Digit->Bottom_Left = new Node();
		The_Digit->Top_Right = new Node();
	}
	else if (x == 9) {
		The_Digit->Medium_Up = new Node();
		The_Digit->Medium_Mid = new Node();
		The_Digit->Medium_Down = new Node();
		The_Digit->Top_Left = new Node();
		The_Digit->Bottom_Right = new Node();
		The_Digit->Top_Right = new Node();
	}
	//                   ------------- PRINTING -------------

	if (The_Digit->Medium_Up != NULL) {
		cout << "	********" << endl;
	}
	if (The_Digit->Top_Left != NULL && The_Digit->Top_Right == NULL) {
		cout << "	*       " << endl;
		cout << "	*       " << endl;
		cout << "	*       " << endl;
	}
	if (The_Digit->Top_Left == NULL && The_Digit->Top_Right != NULL) {
		cout << "	       *" << endl;
		cout << "	       *" << endl;
		cout << "	       *" << endl;
	}
	if (The_Digit->Top_Left != NULL && The_Digit->Top_Right != NULL) {
		cout << "	*      *" << endl;
		cout << "	*      *" << endl;
		cout << "	*      *" << endl;
	}
	if (The_Digit->Top_Left == NULL && The_Digit->Top_Right == NULL) {
		cout << "	        " << endl;
		cout << "	        " << endl;
		cout << "	        " << endl;
	}
	if (The_Digit->Medium_Mid != NULL) {
		cout << "	********" << endl;
	}
	if (The_Digit->Bottom_Left != NULL && The_Digit->Bottom_Right == NULL) {
		cout << "	*       " << endl;
		cout << "	*       " << endl;
		cout << "	*       " << endl;
	}
	if (The_Digit->Bottom_Left == NULL && The_Digit->Bottom_Right != NULL) {
		cout << "	       *" << endl;
		cout << "	       *" << endl;
		cout << "	       *" << endl;
	}
	if (The_Digit->Bottom_Left != NULL && The_Digit->Bottom_Right != NULL) {
		cout << "	*      *" << endl;
		cout << "	*      *" << endl;
		cout << "	*      *" << endl;
	}
	if (The_Digit->Bottom_Left == NULL && The_Digit->Bottom_Right == NULL) {
		cout << "	        " << endl;
		cout << "	        " << endl;
		cout << "	        " << endl;
	}
	if (The_Digit->Medium_Down != NULL) {
		cout << "	********" << endl;
	}
	
}

int main() {

	
}