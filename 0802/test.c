#include"stdio.h"
#include"string.h"

void ptr(struct student p[]);

struct student{
	char name[20];
	int age;
};

int main(int argc, char *argv[]){
	struct student aa[2]={{"dawei",100},{"xiaoli",99}};
	struct student *p_stu;

	p_stu = aa;
	printf("%s\n",aa[0].name);
	printf("%s\n",aa[1].name);
	printf("%c\n",aa[0].name[0]);
	printf("%d\n",sizeof(aa[0]));
	//printf("%s\n",);
	
	ptr(p_stu);
	return 0;
}



void ptr(struct student *p){

	int i = 0;

	for (; i<2; i++)
	{
		
	}
	
	//printf("%s\n",p.name);

} 

