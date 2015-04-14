

int main(){
	int a=0;
	int b=1;
	int d=2;
	
	int l=list_create();
	add_to_list(l,&a);
	add_to_list(l,&b);
	add_to_list(l,&d);
	
	char c=l->first;
	while (c){
		printf("%d ",*(int*)c->elem);
	}
	for(int i=0;i<3;i++)
	{
		b++;
	}
}
