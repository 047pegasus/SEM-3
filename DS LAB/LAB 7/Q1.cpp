#include <iostream>
using namespace std;
struct SLLNODE{
	int INFO=0;
	struct SLLNODE* NEXT;
};
SLLNODE *START = NULL;
void insert(int info)
{
	SLLNODE *newnode = new SLLNODE;
	newnode->INFO = info;
	newnode->NEXT = (START != NULL) ? START : NULL;
	START = newnode;
}
void dis()
{
	if (START != NULL)
	{
		cout << "[ " << START->INFO;
		SLLNODE *temp = START->NEXT;
		while (temp != NULL)
		{
			cout << ", " << temp->INFO;
			temp = temp->NEXT;
		}
		cout << " ]\n";
	}
	else
	{
		cout << "[ ]\n";
	}
}
int main()
{
	START = NULL;
    int n=0;
	cout << "\tCreate linked list using insert_at_beg()\n\n"
		 << "Enter the size: ";
    cin >> n;
	for (int i = 0; i < n; i++)
	{
		int ele;
		cout << "Enter " << i << " element: ";
		cin >> ele;
		insert(ele);
		dis();
	}
	return 0;
}