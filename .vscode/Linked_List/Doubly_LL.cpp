#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class Node{
    public : 
    int data;
    Node*next;
    Node*back;

    public : 
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

//  CONVERTING ARRAY TO LINEKD LIST
Node* convertArrToDLL(vector<int>&arr){
    Node*head = new Node(arr[0]);
    Node*prev = head;

    for (int i = 1; i < arr.size(); i++){
        Node*temp = new Node(arr[i]);
        temp->back = prev;
        prev->next = temp;
        prev = temp;  //  or prev->next;
    }
    return head;   
}

//   DELETING HEAD OF A DOUBLY LINKED LIST
Node* removeHead(Node*head){
    if (head == NULL || head->next == NULL){
        return NULL;
    }
    
    Node*prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete(prev);

    return head;
}

//   DELETING THE TAIL OF THE LIST
Node* removeTail(Node*head){
    Node*temp = head;
    if (temp == NULL || temp->next == NULL){
        return NULL;
    }
    

    while (temp->next !=NULL){
        temp = temp->next;
    }
    temp->back->next = NULL;
    temp->back = NULL;
    delete(temp);

    return head;
}

//  DELETING THE KTH ELEMENT
Node*removeKthElement(Node*head, int k){
    if (head == NULL){
        return NULL;
    }
    Node*temp = head;
    int cnt = 0;

    while (temp != NULL){
        cnt ++;
        if (cnt == k){
            break;
        }
        temp = temp->next;
    }

    Node*prev = temp -> back;
    Node*front = temp -> next;
    
    if (prev == NULL  &&  front == NULL){
        return NULL;
    }
    else if (prev == NULL){
        return removeHead(head);
    }
    else if (front == NULL){
        return removeTail(head);
    }
    prev -> next = front;
    front ->back = prev;

    temp->back = NULL;
    temp->next = NULL;
    delete(temp);
    
    return head;
}

//   DELETE THE NODE , WHICH IS NOT HEAD
void deleteNode(Node*temp){    ///   temp is the given node which we have to delete 
    Node*prev = temp->back;
    Node*front = temp-> next;

    if (front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        delete(temp);
    }

    prev->next = front;
    front->back = prev;

    temp->back = temp->next =nullptr;
    delete(temp);
    
    return;
}


//  PRINT FUNCTION
void print(Node*head){
    while (head != nullptr){
        cout<<head->data<<" ";
        head = head->next;
    }
}


//    INSERTION BEFORE THE HEAD
Node* insertHead(Node*head, int val){
    Node*newNode = new Node(val);
    if (head == NULL){
        return newNode;
    }

    Node*temp = head;

    newNode->next = head;
    head->back = newNode;

    return newNode;
}

//  INSERTION AT THE END
Node* insertTail(Node* head, int val){
    Node*newNode = new Node(val);
    Node*temp = head;

    if (head == NULL)   {
        return newNode;
    }
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->back = temp;

    return head;
    
}

// INSERTION BEFORE THE KTH ELEMENT
Node* insertKth(Node*head, int val, int k){
    if(k == 1){
        return insertHead(head, val);
    }
    Node*temp = head; 
    int cnt = 0 ;
    while (temp->next != NULL ){
        cnt++;
        if (cnt == k) break;
        
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    temp->back->next = newNode;
    newNode->next = temp;
    newNode->back = temp->back;
    temp->back = newNode;

    return head;
    
}


//   INSERTION BEFOE A GIVEN NODE
void insertBeforeNode(Node*node, int val){
    Node*prev = node->back;
    Node*newNode = new Node(val);
    newNode->next = node;
    newNode->back = prev;
    prev->next = newNode;
    node->back = newNode;
}


// REVERSING THE LIST      1=>    by using stack 
void reverseList(Node*head){
    stack <int>st;
    Node*temp = head;

    while (temp!=NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }

    temp = head;
    while (temp!=NULL)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
     
}

//     2=>    BY SWAPPING THE LINKS
Node* reverseDlist(Node*head){
    if (head == NULL || head->next == NULL){
        return head;
    }

    Node* prev = NULL;
    Node*current = head;

    while (current != NULL){
        prev = current->back;
        current->back = current->next;
        current->next = prev;

        current = current->back;
    }

    return prev->back;
}


int main(){
    vector<int> arr = {4,6,3,6,1,2,9}; 
    Node*head = convertArrToDLL(arr);
    // head = removeHead(head);
    // head = removeTail(head);
    // head = removeKthElement(head, 5);
    // deleteNode(head->next->next);       //    deletion of a node.
    // head = insertHead(head, 1);
    // head = insertTail(head, 1);
    // head = insertKth(head, 5, 3);
    // insertBeforeNode(head->next->next, 100);
    // reverseList(head);
    head = reverseDlist(head);
    print(head);

    return 0;
}