
void (int a, int b, int *div, int *mod)
{
    int total;
	int remain;

	total =  a / b;
	remain = a % b;
	*div = &total;
	*mod = &remain
 }
