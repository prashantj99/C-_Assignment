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
void sortByName(struct Employee *);

int main(void) {
	// your code goes here
	struct Employee e[10];
	
	for(int i=0; i<10; i++)
	{
	    input(&e[i]);
	}
	
	sortByName(e);
	
	for(int i=0; i<10; i++)
	{
	    print(e[i]);
	    printf("\n");
	}
	
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

void sortByName(struct Employee *emp )
{
    struct Employee temp;
    int flag;
    for(int i=0; i<10; i++)
    {
        flag=0;
        for(int j=0; j<10-i-1; j++)
        {
            if(strcmp(emp[j].name, emp[j+1].name) > 0)
            {
                flag =1;
                temp=emp[j];
                emp[j]=emp[j+1];
                emp[j+1]=temp;
            }
        }
        
        if(!flag)
        {
            break;
        }
    }
    
}



