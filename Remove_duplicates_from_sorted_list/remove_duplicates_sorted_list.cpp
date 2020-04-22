#include <stdlib.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
map<int, int> checker;
void printNodes(ListNode *head);
ListNode *deleteDuplicates(ListNode *head);
int main()
{
    ListNode head(1);
    ListNode second(1);
    head.next = &second;
    ListNode third(2);
    second.next = &third;
    ListNode fourth(3);
    third.next = &fourth;
    ListNode fifth(3);
    fourth.next = &fifth;
    ListNode *root = &head;
    printNodes(root);
    deleteDuplicates(&head);
    printNodes(root);
}

ListNode *deleteDuplicates(ListNode *head)
{
    ListNode *current = head;
    ListNode *prev;
    while (current != NULL)
    {
        if (checker.find(current->val) == checker.end())
        {
            //not found add and proceed to next
            checker[current->val] = 1;
            prev = current;
            current = current->next;
        }
        else
        { //if found then we delete
            prev->next = current->next;
            current = current->next;
        }
    }
    return head;
}

void printNodes(ListNode *head) {
    ListNode *current = head;
    while (current != NULL)
    {
        cout << current->val << endl;
        current = current->next;
    }
}