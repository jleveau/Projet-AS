#define TRUE 1 
enum {LUNDI, MARDI, MERCREDI, JEUDI, VENDREDI, SAMEDI, DIMANCHE};

enum jour j1 = LUNDI;

struct ptr{
	int i;
};


typedef struct ptr p;

//* \brief single line description; does not require a full stop \return int
int f(int a, int b)
{ 
	a ++;a ++;
	
	b+=a;
	while(b){
		a++;
		b--;
		if (a){
			if (a){
				a=5;
			}
		}
	}
    return v;
}

/** javadoc brief. This second part is the
* detailled 
*
* description
*/
int g(int a, char* b){
	char* f;

int g(){
	int j,i;
	 f(i,j);
}


/*!\return \brief this is a brief test
* test continues
* and more 
*
* description
*/
int k(){
	int a;
	p b;
	b->i=4;
	a=4;
	b=6;
	g(a,b);
	int a;
	p b;
	b->i=4;
	a=4;
	b=6;
	g(a,b);
	int a;
	p b;
	b->i=4;
	a=4;
	b=6;
	g(a,b);
	int a;
	p b;
	b->i=4;
	a=4;
	b=6;
	g(a,b);
	int a;
	p b;
	b->i=4;
	a=4;
	b=6;
	g(a,b);
	int a;
	p b;
	b->i=4;
	a=4;
	b=6;
	g(a,b);
	int a;
	p b;
	b->i=4;
	a=4;
	b=6;
	g(a,b);
	int a;
	p b;
	b->i=4;
	a=4;
	b=6;
	g(a,b);
}

//* \return int \brief test2
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
            a=46;
        }
    }
}
