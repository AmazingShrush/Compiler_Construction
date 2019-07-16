#include<iostream>
using namespace std;
int main(){
		int i;
		string n;
		cout<<"Enter an expression:";
		cin>>n;
		int a=n.length();
		for(i=0;i<a;i++){
			if(n[i]=='f'&&n[i+1]=='o'&&n[i+2]=='r'){
				cout<<"for: keyword"<<endl;
				i=i+2;
			}
			else if(n[i]=='w' && n[i+1]=='h' && n[i+2]=='i' && n[i+3]=='l' && n[i+4]=='e'){
					cout<<"while : keyword"<<endl;
			
			}
			else if(n[i]>=48 && n[i]<=57){
				
			cout<<n[i]<<" is a number "<<endl;
			}
			else if(n[i]==40 || n[i]==41){
				cout<<n[i]<<" is a delimeter "<<endl;
			}
			else if(n[i]=='+' || n[i]=='-' || n[i]=='*' || n[i]=='/' || n[i]=='%'){
				cout<<n[i]<<" is an operand"<<endl;
			}
			else{
				cout<<n[i]<<" is an identifier ";
			}
		
	}
	//This is the code for analysing expressions
}

