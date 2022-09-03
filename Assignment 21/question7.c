#include <stdio.h>
#include <math.h>

struct Time
{
    int hr;
    int min;
};

void input(struct Time *t)
{
    printf("\nEnter Time in (HH:MM) : ");
    scanf("%d:%d", &t->hr, &t->min);
}

struct Time tdiff(struct Time t1, struct Time t2)
{
    struct Time t;
    if(t1.min < t2.min)
    {
        t1.min+=60;
        t1.hr--;
    }
    
    t.hr=t1.hr-t2.hr;
    t.min=t1.min-t2.min;
    
    return t;
}


int main(void) {
    
    struct Time t1, t2, t;
    
    input(&t1);
    input(&t2);
    
    t=tdiff(t1, t2);
    
    printf("\n%02d:%02d",t.hr, t.min);
    
	return 0;
}

