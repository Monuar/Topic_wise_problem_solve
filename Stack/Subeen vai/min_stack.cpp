class MinStack {
    int stack[100000];
    int min[100000];
    int minptr;
    int topptr;

public:
    MinStack() {
       minptr=-1;
        topptr=-1;
    }

    void push(int x) {
        if(topptr>=100000){
            return ;
        }
        stack[++topptr]=x;
        if(minptr<0){
            min[++minptr]=x;
        }
        else{
            if(min[minptr]>x){
                min[++minptr]=x;
            }
            else{
                min[++minptr]=min[minptr];
            }
        }
    }

    void pop() {
        if(topptr<0) return ;
        minptr-=1;
        topptr-=1;
    }

    int top() {
        return stack[topptr];
    }

    int getMin() {
        return min[minptr];
    }
};

