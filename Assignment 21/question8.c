#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
    int rollno;
    char name[100];
    int std;
    char gender;
};

void input(struct Student *s)
{
    scanf("%d %d %c\n", &s->rollno, &s->std, &s->gender);
    fgets(s->name, 100, stdin);
    s->name[strlen(s->name)-1]='\0';
}

void print(struct Student *s)
{
    for(int i=0; i<10; i++)
    {
        printf("%d %s %d %c", s[i].rollno, s[i].name, s[i].std, s[i].gender);
        printf("\n");
    }
}

int main(void) {
	struct Student s[10];
	
	for(int i=0; i<10; i++)
	{
	    input(&s[i]);
	}
	
	print(s);
	
	return 0;
}

