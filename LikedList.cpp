#include "Node.cpp"
#include <vector>
#include <iostream>

using namespace std;

struct LinkedList
{
	Node* root;

	Node* GetElementByIndex(int index)
	{
		Node* current = root;
		for (int i = 0; i < index; i++)
		{
			if (current->next == nullptr)
			{
				current = nullptr;
				break;
			}
			current = current->next;
		}
		return current;
	}

	void InitLinkedList(vector<int> initArray)
	{
		root = new Node();
		Node* current = root;
		for (int i = 0; i < initArray.size(); i++)
		{
			current->value = initArray[i];
			current->next = new Node();
			current = current->next;
		}
	}
	void deleteElement(Node* prev)
	{
		if (prev->next != nullptr && prev->next->next != nullptr)
		{
			prev->next = prev->next->next;
		}
	}
	void printLinkedList()
	{
		Node* current = root;
		int index = 0;
		while (current->next != nullptr)
		{
			cout << index++ << " " << current->value  << "\n";
			current = current->next; 
		}
	}
	void insert(Node* prev, int value)
	{
		Node* newNode = new Node();
		newNode->value = value;
		Node* next = prev->next;
		prev->next = newNode;
		newNode->next = next;
	}
	void insertNewRoot(int value)
	{
		Node* newNode = new Node();
		newNode->value = value;
		Node* next = root;
		newNode->next = next;
		root = newNode;
	}
};