#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[100];
    float salary;
};

void input(struct Employee *);
void print(struct Employee);

int main(void) {
	// your code goes here
	struct Employee emp;
	
	input(&emp);
	print(emp);
	
	return 0;
}

void input(struct Employee *emp)
{
    scanf("%d\n", &emp->id);
    fgets(emp->name, 100, stdin );
    emp->name[strlen(emp->name)-1]='\0';
    scanf("%f", &emp->salary);
}

void print(struct Employee emp)
{
    printf("Emp Id : %d\n", emp.id);
    printf("Emp Name : %s\n", emp.name);
    printf("Emp Salary : %.2f\n", emp.salary);
}


