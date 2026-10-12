
#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *oddEvenList(Node *head)
{
    if (head == NULL)
        return head;

    Node *odd = head;
    Node *even = head->next;
    Node *evenHead = even;

    while (even != NULL && even->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }

    odd->next = evenHead;
    return head;
}

int main()
{
    int n, x;
    Node *head = NULL, *temp = NULL;

    cout << "Enter number of nodes: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter value: ";
        cin >> x;

        Node *newNode = new Node{x, NULL};

        if (head == NULL)
            head = newNode;
        else
            temp->next = newNode;

        temp = newNode;
    }

    head = oddEvenList(head);

    cout << "Odd Even Linked List: ";
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
