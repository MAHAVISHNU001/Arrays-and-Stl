class MyCircularDeque {
 public:
       deque<int>d;
      int cap;
      int c=d.size();
     
       MyCircularDeque(int k) {
             cap=k;
        
     }
    
     bool insertFront(int value) {
       if(d.size()<cap){
       d.push_front(value);
        return true;
       }
      return false;
     }
       
    
    bool insertLast(int value) {
        if(d.size()<cap)
        {
         d.push_back(value);
         return true;
        }
        else 
         return false;
    }
    
    bool deleteFront() {
        if(d.size())
        {
            d.pop_front();
            return true;
        }
        else
         return false;
    }
    
    bool deleteLast() {
        if(d.size())
        {
            d.pop_back();
            return true;
        }
        else
         return false;
        
    }
    
    int getFront()
     {
        if(d.size())
        {
            return d.front();
        }
        else 
         return -1;

        }
    
    
    int getRear() 
    {
        if(!d.empty())
         return d.back();
        else
         return -1;
    }
    
    bool isEmpty() {
        if(d.empty())
        {
            return true;
        }
        return false;
        
    }
    
    bool isFull() {
        if(d.size()<cap)
        return false;
        else 
        return true;
    
 }
};


/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */