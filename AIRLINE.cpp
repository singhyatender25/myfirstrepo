#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--)
	{
	    int A,B,C,D,E;
	    cin>>A>>B>>C>>D>>E;
	    if(A+B<=D && C<=E||A+C<=D && B<=E||B+C<=D && A<=E)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}
	
	return 0;
}
