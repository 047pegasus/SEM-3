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

void beg()
{
	if (START != NULL)
	{
		SLLNODE *temp = START;
		START = START->NEXT;
		delete temp;
	}
	else
	{
		cout << "Already empty.\n";
	}
}

void spec(int loc)
{
	SLLNODE *temp = START, *temp1 = START;
	if (START == NULL || loc <= 0)
		cout << "Already empty or Invalid Location.\n";
	if (loc == 1)
		beg();
	else if (loc >= 2 && START->NEXT != NULL)
	{
		for (int i = 1; i <= loc - 2; i++)
		{
			temp = temp->NEXT;
			if (temp->NEXT == NULL)
				cout << "Location out of bounds.\n";
		}
		temp1 = temp->NEXT;
		temp->NEXT = temp1->NEXT;
		delete temp1;
	}
	else
		cout << "Location out of bounds.\n";
}

void end()
{
	if (START == NULL)
		cout << "Already empty.\n";
	else if (START->NEXT == NULL)
	{
		delete START;
		START = NULL;
	}
	else
	{
		SLLNODE *temp = START, *temp1 = START->NEXT;
		while (temp1->NEXT != NULL)
		{
			temp = temp1;
			temp1 = temp1->NEXT;
		}
		temp->NEXT = NULL;
		delete temp1;
	}
}

int main()
{
	START = NULL;
	int choice, n, loc = -1;
	char reload = 'y';
	cout << "\tDeleting elements from a linked list\n\n"
		 << "Enter the size: ";
	cin >> n;
	SLLNODE *temp = START;
	for (int i = 0; i < n; i++)
	{
		SLLNODE *newnode = new SLLNODE;
		if (i == 0)
			START = newnode;
		else
			temp->NEXT = newnode;

		cout << "Enter " << i << " element: ";
		cin >> newnode->INFO;
		temp = newnode;
	}
	temp = NULL;

	do
	{
		system("cls||clear");
		cout << "\tDeleting elements from a linked list\n";
		dis();
		cout << "\n1) In the beginning\n";
		cout << "2) At a given location\n";
		cout << "3) In the end\n";
		cout << "\nYour Choice[1 to 3]: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			beg();
			break;
		case 2:
			cout << "\nEnter the location (start from 1): ";
			cin >> loc;
			spec(loc);
			break;
		case 3:
			end();
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