#define TRUE 1 

int f(int a, int b)
{ a = a+1;
	a++;
    return a;
}

int g()
{
    int b;
}

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
