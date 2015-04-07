
ptr f(){
	int a=4;
	typedef  int* ptr;
	
	ptr b=&a;
	return b;
}

int main(){
	f();
	ptr b=0;
	
	return 0;
}
