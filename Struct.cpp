
#include <iostream>
#include <vector>
#include "LikedList.cpp"



using namespace std;



int main()
{
    setlocale(LC_ALL, "Russian");
    vector<int> init = { 4,5,6,7,5,8 };
    LinkedList list;
    list.InitLinkedList(init);
    list.printLinkedList();
    Node* toDellist = list.GetElementByIndex(1);
    list.deleteElement(toDellist);
    cout << endl << endl << "to delete" << endl;
    list.printLinkedList();
    Node* toInsert = list.GetElementByIndex(2);
    list.insert(toInsert,1000);
    cout << endl << endl << "to insert" << endl;
    list.printLinkedList();
    list.insertNewRoot(7000);
    cout << endl << endl << "to  root" << endl;
    list.printLinkedList();
}

