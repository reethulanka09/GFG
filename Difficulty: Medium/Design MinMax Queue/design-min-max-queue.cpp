class SpecialQueue {
    queue<int>q;
    deque<int>minq,maxq;

  public:

    void enqueue(int x) {
        // Insert element into the queue
        q.push(x);
        while (!minq.empty() && minq.back() > x) minq.pop_back();
        minq.push_back(x);
        while (!maxq.empty() && maxq.back() < x) maxq.pop_back();
        maxq.push_back(x);
    }
    void dequeue() {
        // Remove element from the queue
        if(q.empty()) return;
        int res = q.front();
        q.pop();
        if(!minq.empty() && minq.front() == res) minq.pop_front();
        if(!maxq.empty() && maxq.front() == res) maxq.pop_front();
    }

    int getFront() {
        // Get front element
        return q.front();
        
    }

    int getMin() {
        // Get minimum element
        return minq.front();
        
    }

    int getMax() {
        // Get maximum element
        return maxq.front();
    }
};