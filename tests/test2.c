#define TRUE 1 

struct ptr{
	int i;
};


typedef struct ptr p;

//* \brief single line description; does not require a full stop \return int
int f(int a, int b)
{ a = a+1;
	int b;
	b++;
	a++;
	a = a+1;
	a++;
	if (a){
		while(a){
			int b;
		}
	}
	a++;a = a+1;
	a++;
    return a;
}

int g(int a, char* b){
	char* f;
}


/*!\param UN \param DEUX \return \brief this is a brief test
* test continues
* and more 
*
* description 
* 
* \param TROIS
*/
int k(){
	int a;
	p b;
	b->i=4;
	a=4;
	b=6;
	g(a,b);
}

//* \return int \brief test2 \param un param \param deux params
int main(char toto, int tata)
{
    if(TRUE)
    {
        if(toto)
        {
            f(2, 3);
            g();
            int b = 3;
        }
        else
        {
            int a = 42;
        }
    }
}
