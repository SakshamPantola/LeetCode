class MyLinkedList {

private:
    struct Node{
        int val;
        Node* next;
        Node(int x): val(x), next(nullptr){}
    };
    Node* head;
    int size;

public:
    MyLinkedList() {
       head = nullptr;
       size = 0; 
    }
    
    int get(int index) {
        if (index < 0 || index >= size) return -1;
        Node* curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        return curr->val;
    }
    
    void addAtHead(int val) {
        Node* temp = new Node(val);

        temp->next = head;
        head = temp;
    size++;
    }
    
    void addAtTail(int val) {
        if (head == NULL) {
        addAtHead(val);
        return;
    }
        Node* tail = new Node(val);
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = tail;
        tail->next = NULL;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>size) return;
        if (index <= 0) {
            addAtHead(val); 
            return;
        }
        Node* temp = head;
        Node* prev = head;
        int cnt = 0;

       
        while(temp!= nullptr && cnt<index){
          prev=temp;
          temp = temp->next;
          cnt++;
        }
        if(cnt == index){
             Node* mid = new Node(val);
        mid->next = prev->next;
        prev->next = mid;
        size++;
        }
    }
    
    void deleteAtIndex(int index) {
    if (index < 0 || index >= size || head == nullptr) return; 

            if(index == 0){
                Node* temp = head;
                head = head->next;
                delete temp;
                size--;
                return;
            }
        
        Node* prev = NULL;
        Node* curr = head;
        int cnt = 0;
        while(curr != NULL && cnt < index){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        if(curr!=nullptr){
        prev->next = curr->next;
       delete curr;
        size--;
        }
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