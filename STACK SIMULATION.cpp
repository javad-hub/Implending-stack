#include<iostream>
#include<conio.h>

#define SIZE 10
using namespace::std;

template <class T>
class Stack{
	T *data;
	int top;
	int maxcapacity;
	public:
		Stack(int size = SIZE);
		void push(T x[]);
		T pop();
		int size();
		bool is_full();
		bool is_empty();
		void show();
		T summit();
};

template <class T>
Stack<T>::Stack(int size){
	data = new T[size];
	maxcapacity = size;
	top = -1;
}

template <class T>
bool Stack<T>::is_full(){
	return top == maxcapacity -1;
}

template <class T>
bool Stack<T>::is_empty(){
	return top == -1;
}


template <class T>
T Stack<T>::summit(){
	if(!is_empty()){
		return data[top];
	}
	else
	exit(1);
}

template <class T>
T Stack<T>:: pop(){
	if(is_empty()){
		cout<<"Stack is empty!";
		exit(1);
	}
	cout<<"Removing "<<summit()<<endl;
	return data[top--];
}

template <class T>
void Stack<T>::push(T x[]){
	for(int i=0;i<maxcapacity;i++){
	if(is_full()){
		cout<<"Stack is full!";
		exit(1);
	}
	cin>>*x;
	cout<<"Inputing "<<*x<<endl;
	data[++top] = *x;}
}


template <class T>
int Stack<T>::size(){
	return top+1;
}

main() {
//---------------------------------------------------------------------This part works with integer
	int x[10];
	Stack<int> obj1;
	cout<<"First Enter 10 inputs of integer:"<<endl;
	obj1.push(x);
	cout<<"\n"<<"----------------------"<<"\nThe top element is "<<obj1.summit()<<endl;
	cout<<"\n"<<"The stack size is "<<obj1.size()<<endl;
	cout<<"\n"<<"The program automaticaly pops the elements at the end:\n"<<endl;
	obj1.pop();
	cout<<"\n";
	obj1.pop();
	cout<<"\n";
	obj1.pop();
	cout<<"\n";
	obj1.pop();
	cout<<"\n";
	obj1.pop();
	cout<<"\n";
	obj1.pop();
	cout<<"\n";
	obj1.pop();
	cout<<"\n";
	obj1.pop();
	cout<<"\n";
	obj1.pop();
	cout<<"\n";
	obj1.pop();
	cout<<"\n";
	cout<<"------------------------"<<"\n";

//----------------------------------------------------------------------------------This part works with char
	char z[10];
	Stack<char> obj2;
	cout<<"Now enter 10 inputs of char:"<<endl;
	obj2.push(z);
	cout<<"\n"<<"----------------------"<<"\nThe top element is "<<obj2.summit()<<endl;
	cout<<"\n"<<"The stack size is "<<obj2.size()<<endl;
	cout<<"\n"<<"The program automaticaly pops the elements at the end:\n"<<endl;
	obj2.pop();
	cout<<"\n";
	obj2.pop();
	cout<<"\n";
	obj2.pop();
	cout<<"\n";
	obj2.pop();
	cout<<"\n";
	obj2.pop();
	cout<<"\n";
	obj2.pop();
	cout<<"\n";
	obj2.pop();
	cout<<"\n";
	obj2.pop();
	cout<<"\n";
	obj2.pop();
	cout<<"\n";
	obj2.pop();
	cout<<"\n";
	cout<<"------------------------"<<"\n";
//--------------------------------------------------------------------------------------This part works with float
	float t[10];
	Stack<float> obj3;
	cout<<"Now enter 10 inputs of float:"<<endl;
	obj3.push(t);
	cout<<"\n"<<"----------------------"<<"\nThe top element is "<<obj3.summit()<<endl;
	cout<<"\n"<<"The stack size is "<<obj3.size()<<endl;
	cout<<"\n"<<"The program automaticaly pops the elements at the end:\n"<<endl;
	obj3.pop();
	cout<<"\n";
	obj3.pop();
	cout<<"\n";
	obj3.pop();
	cout<<"\n";
	obj3.pop();
	cout<<"\n";
	obj3.pop();
	cout<<"\n";
	obj3.pop();
	cout<<"\n";
	obj3.pop();
	cout<<"\n";
	obj3.pop();
	cout<<"\n";
	obj3.pop();
	cout<<"\n";
	obj3.pop();
	cout<<"\n";
	cout<<"------------------------"<<"\n";
//-------------------------------------------------------------------------------------This part works with double
	double y[10];
	Stack<double> obj4;
	cout<<"Now enter 10 inputs of double:"<<endl;
	obj4.push(y);
	cout<<"\n"<<"----------------------"<<"\nThe top element is "<<obj4.summit()<<endl;
	cout<<"\n"<<"The stack size is "<<obj4.size()<<endl;
	cout<<"\n"<<"The program automaticaly pops the elements at the end:\n"<<endl;
	obj4.pop();
	cout<<"\n";
	obj4.pop();
	cout<<"\n";
	obj4.pop();
	cout<<"\n";
	obj4.pop();
	cout<<"\n";
	obj4.pop();
	cout<<"\n";
	obj4.pop();
	cout<<"\n";
	obj4.pop();
	cout<<"\n";
	obj4.pop();
	cout<<"\n";
	obj4.pop();
	cout<<"\n";
	obj4.pop();
	getch();
	return 0;
}
