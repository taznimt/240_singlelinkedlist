// singlelinkedlist.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
struct Node {
	int noMhs;
	string name;
	Node* next;
};
Node* START = NULL;
void addNode() {
	int nim;
	string name;
	Node* nodeBaru = new Node();
	cout << "Masukkan NIM : "; 
	cin >> nim;
	cout << "Masukkan Nama : ";
	cin >> name;
	nodeBaru->noMhs = nim;
	nodeBaru->name = name;

	if (START == NULL || nim <= START->noMhs) {
		if (START != NULL || nim <= START->noMhs)
		{
			cout << " NIM sudah ada " << endl;
			return;
		}
		Node* previous = START;
		Node* current = START;

		while ((current != NULL) && (nim >= current->noMhs))
		{
			if (nim == current->noMhs)
			{
				cout << "NIM sudah ada" << endl;
				return;
			}
			previous = current;
			current = current->next;
		}

		nodeBaru->next = current;
		previous->next = nodeBaru;
		
	}

	

}

bool searchNode(int nim, Node* current, Node* previous) {
	previous = START;
	current = START;
	while (current != NULL && nim > current->noMhs)
	{
		previous = current;
		current = current->next;
	}

	if (current == NULL)
	{
		return false;
	}
	else if (current->noMhs == nim)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool deleteNode(int nim) {
	Node* current = START;
	Node* previous = START;
	if (searchNode(nim, previous, current) == false)
		return false;
	previous->next = current->next;
	if (current == START)
		START = current->next;
	return true;
}
bool listEmpty() {
	if (START == NULL)
		return true;
	else
		return false;
}
void traverse() {
	if (listEmpty()) {
		cout << "List Kosong" << endl;
		system("pause");
		system("cls");
		return;
	}
	else {
		Node* currentNode = START;
		while (currentNode != NULL) {
			cout << "NIM: " << currentNode->noMhs << ", Nama: " << currentNode->name << endl;
			currentNode = currentNode->next;
		}
	}
}

int main()
{
   
}


