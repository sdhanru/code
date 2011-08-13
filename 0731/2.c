#include"stdio.h"
struct student{
	char name[20];
	int age;
	int id;
	}stu1={"xiaoli",13,3333},stu2={"xiaoming"};
int main(int argc, char *argv[]){

	stu1.name[20]={"xiaoli"};
	printf("%s %d %d\n",stu1.name,stu1.age,stu1.id);
	stu2.age=20;stu2.id=2222;
	printf("%s %d %d\n",stu2.name,stu2.age,stu2.id);

	return 0;
}
