class MyLinkedList {
struct node{
    int value;
    node* next;
    node(int val){
        value=val;
        next=NULL;
    }
};
node* head;
public:
    MyLinkedList() {
       head=NULL; 
    }
    
    int get(int index) {
        node* temp=head;
        for(int i=0;i<index;i++){
            if(temp==NULL){
                return -1;
            }
            temp=temp->next;
        }
        if(temp==NULL){
            return -1;
        }
        return temp->value;
    }
    
    void addAtHead(int val) {
        node* newnode=new node(val);
        newnode->next=head;
        head=newnode;
    }
    
    void addAtTail(int val) {
        node* newnode=new node(val);
        if(head==NULL){
            head=newnode;
            return;
        }
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
    
    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }

        node* temp = head;

        for (int i = 0; i < index - 1; i++) {
            if (temp == NULL)
                return;

            temp = temp->next;
        }

        if (temp == NULL)
            return;

        node* newNode = new node(val);

        newNode->next = temp->next;
        temp->next = newNode;
    }
    
    void deleteAtIndex(int index) {
         if (head == NULL)
            return;

        if (index == 0) {
            node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        node* temp = head;

        for (int i = 0; i < index - 1; i++) {
            if (temp == NULL)
                return;

            temp = temp->next;
        }

        if (temp == NULL || temp->next == NULL)
            return;

        node* deleteNode = temp->next;
        temp->next = temp->next->next;

        delete deleteNode;
    }
};
