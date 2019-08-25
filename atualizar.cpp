#include<iostream>
#include<stdlib.h>
using namespace  std;
int main(int nArgs,char *args[]){
	std::string  a;
	cout<<"digite a alteracao feita:\n";
	cin>>a;
	system("git add .");
	system("git commit -m \"comitando\" ");
	system("git push origin master");
	cout<<"Ate a proxima";
return 0;

}
