#include "ListNode.h"

ListNode::ListNode()
{
val = -1;
}
int ListNode::getValue() const
{
return val;
}


void ListNode::setValue(int newval)
{
val = newval;
}
ListNode * ListNode::getNext() const
{
return next;
}
void ListNode::setNext(ListNode * p)
{
next = p;
}
