#include <stdio.h>


struct fish {
	const char *name;
	const char *species; 
	int teeth;
	int age;
};


void catalog(struct fish f)
{
	printf("%s is a %s with %i teeth. He is %i\n",
		f.name, f.species, f.teeth, f.age);
}

void label(struct fish l)
{
	printf("Name:%s\nSpecies:%s\n %i years old, %i teet\n",
	l.name, l.species, l.teeth, l.age);
}


int main()
{
	struct fish snappy = {"Snappy", "Piranha", 69, 4};
	catalog(snappy);
	
	label(snappy);
	return 0;
}










