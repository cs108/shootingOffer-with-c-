#include<iostream>
using namespace std;

struct ListNode
{
	int value;
	ListNode *next;
};

//another way written by me
void AddToTail(ListNode *&head, int value)
{
	ListNode *newNode = new ListNode();
	newNode->next = nullptr;
	newNode->value = value;

	if (head == nullptr)
	{
		head = newNode;

	}
	else
	{
		ListNode *pNode = head;
		while (pNode->next != nullptr)
		{
			pNode = pNode->next;
		}
		pNode->next = newNode;
	}
}


int main()
{
	ListNode *L=nullptr;
	AddToTail(L, 0);
	AddToTail(L, 1);
	cout << "values:";
	for (ListNode *p = L; p != nullptr; p = p->next)
	{
		cout << p->value;
		//cout <<( p->next == nullptr )? '.' : ','; //this would cause something wrong logically
		(p->next == nullptr) ? cout << '.' << endl : cout << ',';//this is the instruction
	}
}



//following is given by the book except main()
/*
#include<iostream>
using namespace std;

struct ListNode
{
	int value;
	ListNode *next;
};

// given by the book
void AddToTail(ListNode **head, int value)
{
	ListNode *newNode = new ListNode();
	newNode->next = nullptr;
	newNode->value = value;
	if (*head == nullptr)
	{
		*head = newNode;
	}
	else
	{
		ListNode *pNode = *head;
		while (pNode->next != nullptr)
		{
			pNode = pNode->next;
		}
		pNode->next = newNode;
	}
}

int main()
{
	ListNode **L;
	ListNode *l = nullptr;  //something like l must be declare for initializing L
	L = &l;                 //there would be problem if you use L=nullptr to initialize L 
	AddToTail(L, 0);
	AddToTail(L, 1);
	cout << "values:";
	for (ListNode *p = *L; p != nullptr; p = p->next)
	{
		cout << p->value;
		//cout <<( p->next == nullptr )? '.' : ','; //this would cause something wrong logically
		(p->next == nullptr) ? cout << '.' << endl : cout << ',';//this is the instruction
	}
}
*/
