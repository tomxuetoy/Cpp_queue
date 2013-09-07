// the code is from link: http://www.riteshkumarnitw.webs.com/datastructure/queue.txt
#include <iostream>
#include <new>
#include <cstdlib>
#include <stdlib.h>
 
using namespace std;
 
class queue
{
private:
  struct node
	{
		int data;
		node *link;
	}*head, *tail;
				
public:
	queue();
	void push_back(int num);
	void display();
	int pop_front();
};
 
queue::queue()
{
	head = NULL;
	tail = NULL;
}
 
void queue::push_back(int num)
{
	node *temp;
	temp = new(nothrow) node;
	if (temp == NULL)
        cout << "Queue overflow\n" << endl;
 
	temp->data = num;
	temp->link = NULL;
	
	if (head == NULL)
	{
		head = temp;
		tail = temp;
	}
	else
	{
		tail->link = temp;
		tail = tail->link;
	}
}
 
void queue::display()
{
	node *temp;
	temp = head;
	while (temp != NULL)
	{
	    cout << temp->data << " ";
	    temp = temp->link;
	}
	cout << "\n";
}
 
int queue::pop_front()
{
	node *temp;
	if(head == NULL)
	{
		tail = NULL;
		cout << "Queue Cleared\n";
		return NULL;
	}
	else
	{
        temp = head;
        head = head->link;
        return temp->data;
        delete temp;
	}
}
 
int main()
{
	queue q;
 
	for (int i=0;i<10;i++)
	{
	    q.push_back(rand());
	    q.display();
	}
 
	cout << ".........................................\n";
 
	for(int i=0;i<15;i++)
	{
		q.display();
		cout << "dequeued val " << q.pop_front() << "\n";
	}
 
	system("pause");
	return 0;
}
/* 
$ a.exe
41
41 18467
41 18467 6334
41 18467 6334 26500
41 18467 6334 26500 19169
41 18467 6334 26500 19169 15724
41 18467 6334 26500 19169 15724 11478
41 18467 6334 26500 19169 15724 11478 29358
41 18467 6334 26500 19169 15724 11478 29358 26962
41 18467 6334 26500 19169 15724 11478 29358 26962 24464
.........................................
41 18467 6334 26500 19169 15724 11478 29358 26962 24464
dequeued val 41
18467 6334 26500 19169 15724 11478 29358 26962 24464
dequeued val 18467
6334 26500 19169 15724 11478 29358 26962 24464
dequeued val 6334
26500 19169 15724 11478 29358 26962 24464
dequeued val 26500
19169 15724 11478 29358 26962 24464
dequeued val 19169
15724 11478 29358 26962 24464
dequeued val 15724
11478 29358 26962 24464
dequeued val 11478
29358 26962 24464
dequeued val 29358
26962 24464
dequeued val 26962
24464
dequeued val 24464
 
Queue Cleared
dequeued val 0
 
Queue Cleared
dequeued val 0
 
Queue Cleared
dequeued val 0
 
Queue Cleared
dequeued val 0
 
Queue Cleared
dequeued val 0
Press any key to continue . . .
 
 * */
