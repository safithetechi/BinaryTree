#include <iostream>
#include"Btree.h"

using namespace std;





int main()
{
	
	\
	Btree B;
	
	
	
	B.Insert(30);
	B.Insert(10);
	B.Insert(20);
	B.Insert(2120);
	
	B.print();
	
	B.deleteTree(30);

	B.print();	
	
	int t;
	cin>>t;
	
	
	return 0;
}
