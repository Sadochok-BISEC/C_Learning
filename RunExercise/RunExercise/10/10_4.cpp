#include "10_4.h"

int main10_4()
{
	TenFour::LinkLists linkList;

	linkList.addItem(1);
	linkList.addItem(2);
	linkList.addItem(3);
	linkList.addItem(4);
	linkList.addItem(5);

	linkList.display();

	return 0;
}

namespace TenFour
{

	LinkLists::~LinkLists()
	{
		Link *ptr_currentLink = m_first;
		while (ptr_currentLink)
		{
			m_first = ptr_currentLink->next;
			delete ptr_currentLink;
			cout << "Element deleted\n";
			ptr_currentLink = m_first;
		}
	}
	void LinkLists::addItem(int data)
	{
		
		// We allocate memory for a new list item
	    // We save data to it a pointer to the next item in the list
		// will now point to an element that
		// before that was the first
		// the newly created element is now the first

		Link *ptr_newLink = new Link;
		ptr_newLink->data = data;
		ptr_newLink->next = m_first;

		m_first = ptr_newLink;
	}
	
	void LinkLists::display() const
	{
		Link * ptr_currentLink = m_first;
		while (ptr_currentLink)
		{
			cout << ptr_currentLink->data << "\n";
			ptr_currentLink = ptr_currentLink->next;
		}
	}
}