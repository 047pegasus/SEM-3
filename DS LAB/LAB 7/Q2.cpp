#include <iostream>
using namespace std;
struct SLLNODE{
	int INFO=0;
	struct SLLNODE* NEXT;
};
SLLNODE *START = NULL;

void dis()
{
	cout << "\nLinked List: [ ";
	if (START != NULL)
	{
		cout << START->INFO;
		SLLNODE *temp = START->NEXT;
		while (temp != NULL)
		{
			cout << ", " << temp->INFO;
			temp = temp->NEXT;
		}
	}
	cout << " ]\n";
}

void beg(int info)
{
	SLLNODE *newnode = new SLLNODE;
	newnode->INFO = info;
	newnode->NEXT = START;
	START = newnode;
}

void spec(int info, int loc)
{
	SLLNODE *temp = START, *newnode = new SLLNODE;
	newnode->INFO = info;
	if (loc == 1)
	{
		newnode->NEXT = START;
		START = newnode;
	}
	else if (loc >= 2 && START != NULL)
	{
		for (int i = 1; i <= loc - 2; i++)
		{
			temp = temp->NEXT;
			if (temp == NULL)
			{
				cout << "Location out of bounds.\n";
				return;
			}
		}
		newnode->NEXT = temp->NEXT;
		temp->NEXT = newnode;
	}
	else
	{
		cout << "Invalid loc";
	}
}

void end(int info)
{
	SLLNODE *newnode = new SLLNODE;
	newnode->INFO = info;
	newnode->NEXT = NULL;
	if (START == NULL)
		START = newnode;
	else
	{
		SLLNODE *temp = START;
		while (temp->NEXT != NULL)
			temp = temp->NEXT;
		temp->NEXT = newnode;
	}
}

int main()
{
	START = NULL;
	int choice, n, loc = -1;
	char reload = 'y';
	do
	{
		system("cls||clear");
		cout << "\tInserting elements in a linked list\n";
		dis();
		cout << "Enter the number to be inserted: ";
		cin >> n;
		cout << "\n1) In the beginning\n";
		cout << "2) At a given location\n";
		cout << "3) In the end\n";
		cout << "\nYour Choice[1 to 3]: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			beg(n);
			break;
		case 2:
			cout << "\nEnter the location (start from 1): ";
			cin >> loc;
			spec(n, loc);
			break;
		case 3:
			end(n);
			break;
		default:
			cout << "Wrong input.";
		}
		dis();
		cout << "\nWould you like to try again? (y): ";
		cin >> reload;
	} while (reload == 'y');
	return 0;
}