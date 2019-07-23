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
				cout<<"\tfor is a keyword"<<endl;
				i=i+2;
			}
			else if(n[i]=='w' && n[i+1]=='h' && n[i+2]=='i' && n[i+3]=='l' && n[i+4]=='e'){
					cout<<"\twhile is a keyword"<<endl;
					i=i+4;
			
			}
			else if(n[i]=='d' && n[i+1]=='o'){
				cout<<"\tdo is a keyword"<<endl;
				i=i+1;
			}
			else if(n[i]=='i' && n[i+1]=='n' && n[i+2]=='t'){
				cout<<"\tint is a keyword"<<endl;
				i=i+2;
			}
			else if(n[i]=='s' && n[i+1]=='i' && n[i+2]){
				cout<<"\tsin is a keyword"<<endl;
				i=i+2;
			}
			else if(n[i]=='i' && n[i+1]=='f'){
				cout<<"\tif is a keyword"<<endl;
				i=i+1;
			}
			else if(n[i]=='e' && n[i+1]=='l' && n[i+2]=='s' && n[i+3]=='e'){
				cout<<"\telse is a keyword"<<endl;
				i=i+3;
			}
			else if(n[i]>=48 && n[i]<=57){
				
			cout<<"\t"<<n[i]<<" is a constant"<<endl;
			}
			else if(n[i]==40 || n[i]==41 || n[i]==';' || n[i]==123 || n[i]==125 || n[i]==91 || n[i]==93 ||n[i]==','){
				cout<<"\t"<<n[i]<<" is a delimeter "<<endl;
			}
			else if(n[i]=='+' && n[i+1]=='+'){
				cout<<"\t++ is an operator"<<endl;
				i=i+1;
			}
			else if(n[i]=='-' && n[i+1]=='-'){
				cout<<"\t-- is an operator"<<endl;
				i=i+1;
			}
			else if(n[i]=='=' && n[i+1]=='='){
				cout<<"\t== is an operator"<<endl;
				i=i+1;
			}
			else if(n[i]=='+' || n[i]=='-' || n[i]=='*' || n[i]=='/' || n[i]=='%' || n[i]=='=' || n[i]=='>' || n[i]=='>' || n[i]=='='){
				cout<<"\t"<<n[i]<<" is an operator"<<endl;
			}
			else{
				cout<<"\t"<<n[i]<<" is an identifier "<<endl;
			}
		
	}
	//This is the code for analysing expressions
}

