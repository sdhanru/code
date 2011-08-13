#include "stdio.h"
#pragma pack(push,2)
struct employee{
	char name[20];
	char department[20];
	int id;
	int age;
};
int main(int argc, char* argv[]){
	//struct employee emp[3];
	struct employee emp;
	//int i = 0;

	//for (i = 0; i<=2; i++){
	//printf("It is No.%d\n",i+1);
	//scanf("%s %s %d %d",emp[i].name, &emp[i].department, &(emp[i].id), &(emp[i].age));
		

	//printf("%s,%s,%d,%d\n",emp[i].name,emp[i].department,emp[i].id,emp[i].age);
	
	//}
	printf("%d\n",sizeof(emp));


	return 0;
}


#pragma pack(pop)











