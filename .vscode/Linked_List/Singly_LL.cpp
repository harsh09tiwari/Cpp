#include <iostream>
#include <vector>
using namespace std;

//  CREATION OF LINKED LIST
struct Node
{ //   class can also used in place of struct as it can provide the features of OOPS
public:
    int data;
    Node *next;

public:
    Node(int data1, Node *next1 = NULL)
    { //   constructor
        data = data1;
        next = next1;
    }
    // public:
    // Node(int data1){   //   constructor
    //     data = data1;
    //     next = nullptr;
    // }
};

//   ARRAY TO LINKED LIST
Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = mover->next;
        // mover = temp;    // same as above one, points to the next element
    }
    return head;
}

//    TRAVERSING THE LINKED LIST
int lengthOfLL(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        cnt++;
    }
    cout << endl;
    return cnt;
}

//  SEARCHING A ELEMENT
int checkIfPresent(Node *head, int val)
{
    Node *temp = head;
    while (temp)
    {
        if (temp->data == val)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

//  DELETION FORM HEAD
Node *removeHead(Node *head)
{
    if (head == NULL){
        return head;
    }

    Node *temp = head;
    head = head->next;

    free(temp);
    return head;
}

//   DELETION FROM END
Node *removeTail(Node *head)
{
    Node *temp = head;
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }

    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;

    return head;
}

//   DELETION FORM Kth POSITION
Node *removeKth(Node *head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    int count = 0;
    Node *temp = head;
    Node *prev = NULL;

    while (temp != NULL)
    {
        count++;
        if (count == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

//   INSERTION FROM BEGINING
Node *insertHead(Node *head, int val)
{
    Node *temp = new Node(val, head);

    return temp;
}

//   INSERTION AT END

Node *insertEnd(Node *head, int val)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val, NULL);
    temp->next = newNode;

    return head;
}

//   INSERTION AT THE Kth POSITION

Node *insertKth(Node *head, int val, int k)
{

    if (head == NULL)
    {
        if (k == 1)
        {
            Node *newNode = new Node(val, NULL);
            return newNode;
        }
    }
    if (k == 1)
    {
        Node *temp = new Node(val, head);
        return head;
    }

    Node *temp = head;
    Node *prev = NULL;
    int cnt = 0;

    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            Node *newNode = new Node(val, NULL);
            newNode->next = prev->next;
            prev->next = newNode;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

//    INSERT AN VALUE BEFORE A ELEMENT
Node *insertBeforeValue(Node *head, int val, int el)
{

    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == el)
    {
        Node *temp = new Node(val, head);
        return temp;
    }

    Node *temp = head;

    while (temp->next != NULL)
    {
        if (temp->next->data == el)
        {
            Node *newNode = new Node(val, NULL);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

//  PRINT FUNCTION
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    // int val = 2;
    vector<int> arr = {11, 2, 3, 4};
    Node *head = convertArr2LL(arr);

    // head = removeHead(head);
    // cout<<head->data;

    // head = removeTail(head);
    // cout<<lengthOfLL(head);
    // cout<< checkIfPresent(head, 1);

    // head = removeKth(head , 3);

    // head = insertHead(head, 9);

    // head = insertEnd(head, 9);

    // head = insertKth(head, 8, 4);

    head = insertBeforeValue(head, 8, 4);
    print(head);

    return 0;
}

// int main(){
//     vector<int>arr = {1,2,3,4};
//     Node* y = new Node(arr[0], nullptr);
//     cout<<y->data<<endl;
//     cout<<y->next;
//     return 0;
// }

// int main(){
//     vector<int>arr = {1,2,3,4};
//     Node y = Node(arr[0], nullptr);
//     cout<<y.data;
//     // cout<<y.next;
//     return 0;
// }
