#include <bits/stdc++.h>
using namespace std;

class node {
   public:
    node *next;
    int data;

    node(int x) {
        data = x;
        next = NULL;
    }
};

void insertAtHead(node *&head, int data) {
    if (head == NULL) {
        head = new node(data);
        return;
    } else {
        node *n = new node(data);
        n->next = head;
        head = n;
        return;
    }
}

int length(node *head) {
    int cnt = 0;
    while (head != NULL) {
        cnt++;
        head = head->next;
    }
    return cnt;
}

node *takeInput() {
    int d;
    cin >> d;
    node *head = NULL;
    while (d != -1) {
        insertAtHead(head, d);
        cin >> d;
    }
    return head;
}

node* mergeLL(node*head1,node*head2){
    //Base case
    if(head1 == NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    //Recursive case
    node* temp;
    if(head1->data<head2->data){
        temp = head1;
        temp->next = mergeLL(head1->next,head2);
    }
    else{
        temp = head2;
        temp->next = mergeLL(head1,head2->next);
    }
    return temp;
}

node* mergeSort(node*head){
    //Base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    //recursive case
    //Break LL in two
    node*mid = head;
    for(int i=1;i<length(head)/2;i++){
        mid = mid->next;
    }
    node*a = head;
    node*b = mid->next;
    mid->next = NULL;
    //Recursively sort the two parts
    a = mergeSort(a);
    b = mergeSort(b);
    //merge the two sorted parts in final LL
    return mergeLL(a,b);
}

void print(node *head) {
    while (head != NULL) {
        cout << head->data << "-> ";
        head = head->next;
    }
    cout << endl;
}

istream &operator>>(istream &is, node *&head) {
    head = takeInput();
    return is;
}

ostream &operator<<(ostream &os, node *head) {
    print(head);
    return os;
}

int main() {
    node *head = NULL;
    cin >> head;
    cout << head;
    node* newHead = mergeSort(head);
    cout<<newHead;

    return 0;
}