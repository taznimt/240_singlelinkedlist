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
int main()
{
   
}


