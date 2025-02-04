# include <iostream>

using namespace std;

struct Node{
    int data;
    Node * next;
    Node(int x){
        data = x;
        next = NULL;
    }
};


Node * head;

// Takes head pointer of the list and index as arguments and returns data at index


int Getnth(Node * head , int index){
    if(head == NULL)
    return -1;

    if(index == 1)
        return head->data;
    
    return Getnth(head->next, index-1);
}


// Main


int main(){
    Node* head = new Node(2);
    head->next = new Node(3);
    head ->next ->next = new Node(4);



    cout << "Original List: "<<endl;


}


void display(){
    if(!head){
        cout << "Empty List" <<endl;
        return;
    }

    Node* temp = head;

    while(temp){
    cout << temp ->data << " ->";
    temp = temp->next;
    
    }

    cout << "NULL" <<endl;

}
