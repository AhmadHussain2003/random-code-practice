#include<iostream>
#include<stack>
using namespace std;
class TwoStack {
	int *arr;
    int top1;
    int top2;
    int size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        this -> size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        //atleast a empty space present
        if(top2 - top1 > 1 ) {
            top1++;
            arr[top1] = num;
        } 
       
    }

    // Push in stack 2.
    void push2(int num) {
         if(top2 - top1 > 1 ) {
            top2--;
            arr[top2] = num;
        } 
       
    }

    // Pop from stack 1 and return popped element.
    int pop1() {
		if( top1 >= 0) {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }

    // Pop from stack 2 and return popped element.
    int pop2() {
		if( top2 < size) {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
	
    int peek1() {
        if(top1 >=0 )
            return arr[top1];
        else
        {
            cout << "Stack one  is Empty" << endl;
            return -1;
        }
    }
    
    int peek2() {
        if(top2 < size)
            return arr[top2];
        else
        {
            cout << "Stack two is Empty" << endl;
            return -1;
        }
    }
    
    bool isEmpty1() {
      if( top1 == -1) {
          return true;
        }
      else{
          return false;
        }
    }

   bool isEmpty2() {
      if( top2 == size) {
          return true;
        }
      else{
          return false;
        }
    }

};

int main(){
	TwoStack st(6);
	
	st.push1(1);
	st.push1(2);
	st.push1(3);
	
	st.pop1();
	
	cout<<"top element of first stack is :"<<st.peek1()<<endl;
	
	 
    if(st.isEmpty1()){
    	cout<<"stack one is empty"<<endl;
    	
	}
	else{
		cout<<"stack one is not empty"<<endl;
	}
	
	st.push2(6);
	st.push2(5);
	st.push2(4);
	
	st.pop2();
	cout<<"top element of second stack is :"<<st.peek2()<<endl;
 
   if(st.isEmpty2()){
    	cout<<"stack two is empty"<<endl;
    	
	}
	else{
		cout<<"stack two is not empty"<<endl;
	}
	
}
