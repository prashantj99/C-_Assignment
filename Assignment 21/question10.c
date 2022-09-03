#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Marks
{
    int rollno; 
    float chem_marks, maths_marks, phy_marks;
    char name[100];
};

void input(struct Marks *m)
{
    fgets(m->name, 100, stdin);
    m->name[strlen(m->name)-1]='\0';
    scanf("%d %f %f %f\n", &m->rollno, &m->chem_marks, &m->phy_marks, &m->maths_marks);
}

void printPercentage(struct Marks m)
{
    float sum=(m.chem_marks+m.phy_marks+m.maths_marks);
    float per=sum/3;
    printf("\n%s\t", m.name);
    printf("%.2f", per);
}



int main(void) {
    
    struct Marks m[5];
    
    for(int i=0; i<5; i++)
    {
        input(&m[i]);
    }
    
    for(int i=0; i<5; i++)
    {
        printPercentage(m[i]);
    }
    
	return 0;
}

