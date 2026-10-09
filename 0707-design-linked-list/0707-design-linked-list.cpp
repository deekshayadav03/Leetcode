class MyLinkedList {
   class Listnode{
  public:
       Listnode* next;
        int val;
          Listnode(int data){
            val= data;
            next=NULL;
          }
    };
     Listnode* head;
     int size;
     public:
    MyLinkedList() {
        head= nullptr;
        size=0;
    }
    
    int get(int index) {
        if(index<0||index>=size) return -1;
        Listnode* temp= head;
        for (int i =0; i<index;i++){
            temp= temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Listnode* node= new Listnode(val);
        if(head==NULL){ 
            head= node;
            size++;
            return;
        }
        node->next= head;
        head= node;
        size++;
    }
    
    void addAtTail(int val) {
         Listnode* node= new Listnode(val);
         if(head==nullptr) {
            head= node;
            size++;
            return;
         }
          Listnode* temp= head;
     while(temp->next!=NULL){
        temp= temp->next;
     }
    temp->next= node;
    size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index==0){ 
            addAtHead(val);
            return;
            }
         if(size<index) return;
         if(index==size) {
            addAtTail(val);
            return;
            }
         Listnode* node= new Listnode(val);
         Listnode* temp= head;
        for (int i =0; i<index-1;i++){
            temp= temp->next;
         }

         node->next= temp->next;
         temp->next= node;
         size++;
    }
    
    void deleteAtIndex(int index) {
        if(index < 0 || index >= size) return;
        if(index==0){
            head= head->next;
            size--;
            return;
        }
         Listnode* temp= head;
        for (int i =0; i<index-1;i++){
        temp= temp->next;
        }
        temp->next= temp->next->next;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */