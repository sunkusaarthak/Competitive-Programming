//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

class SortedStack{
public:
	stack<int> s;
	void sort();
};

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        printf("%d ", s.top());
       	s.pop();
    }
    printf("\n");
}

int main()
{
int t;
cin>>t;
while(t--)
{
	SortedStack *ss = new SortedStack();
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	int k;
	cin>>k;
	ss->s.push(k);
	}
	ss->sort();
	printStack(ss->s);
}
}
// } Driver Code Ends


/*The structure of the class is
class SortedStack{
public:
	stack<int> s;
	void sort();
};
*/

/* The below method sorts the stack s 
you are required to complete the below method */
stack<int> pushAtCorrectPlace(stack<int> s, int x) {
    if(s.empty()) {
        s.push(x);
        return(s);
    }
    if(s.top() < x) {
        s.push(x);
        return(s);
    }
    int val = s.top();
    s.pop();
    s = pushAtCorrectPlace(s, x);
    s.push(val);
    return(s);
}  

void stackSort(stack<int> &s) {
    if(s.empty()) {
       return;
   }
   int x = s.top();
   s.pop();
   stackSort(s);
   if(s.empty()) {
       s.push(x);
   }
   else if(s.top() < x) {
       s.push(x);
   } else {
       s = pushAtCorrectPlace(s, x);
   }
}

void SortedStack :: sort()
{
    stackSort(s);
}

