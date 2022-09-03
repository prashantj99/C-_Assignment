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
struct Employee getMaxSalEmp(struct Employee *);



int main(void) {
	// your code goes here
	struct Employee e[10];
	
	for(int i=0; i<10; i++)
	{
	    input(&e[i]);
	}
	
	print(getMaxSalEmp(e));
	
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

struct Employee getMaxSalEmp(struct Employee *emp)
{
    struct Employee emax= {0,"guest",0.0};
    int max=emp[0].salary;
    for(int i=1; i<10; i++)
    {
        if(emp[i].salary > max)
        {
            emax=emp[i];
            max=emp[i].salary;
        }
    }
    
    return emax;
}


