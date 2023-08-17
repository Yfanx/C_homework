#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<malloc.h>
#define NUMLN 50
#define NAMELEN 50
struct Student
{
	int score;
	int age;
	char stuNum[NUMLN];
	char stuName[NAMELEN];
	struct Student* next;
};
struct StuList {
	struct Student* HEAD;
	int LENGTH;
};
struct Student* getElement(struct StuList* link, int pos)
{
	if (pos<0 || pos>link->LENGTH)
	{
		return NULL;
	}
	struct Student* p = link->HEAD;
	int i = 0;
	while (i < pos) {
		p = p->next;
		i++;
	}
	return p;
}
void initLink(struct StuList* link)
{
	link->HEAD = NULL;
	link->LENGTH = 0;
}
int insert(struct StuList* link, int pos, struct Student* stu)
{
	if (pos<0 || pos>link->LENGTH)
	{
		return -1;
	}
	if (pos == 0)
	{
		stu->next = link->HEAD;
		link->HEAD = stu;
	}
	else
	{
		struct Student* prev = getElement(link, pos - 1);
		stu->next = prev->next;
		prev->next = stu;
	}
	link->LENGTH++;
	return 1;
}
int showMenu()
{
	printf("\t|==============请输入一个数字选中如下的一个命令：===============|\n");
	printf("\t|\t1.录入学生成绩信息。\t\t\t\t\t|\n");
	printf("\t|\t2.读取学生成绩信息。\t\t\t\t\t|\n");
	printf("\t|\t3.保存学生成绩信息。\t\t\t\t\t|\n");
	printf("\t|\t4.打印学生成绩信息。\t\t\t\t\t|\n");
	printf("\t|\t-1.退出系统。\t\t\t\t\t|\n");
	printf("\t|===============================================================|\n");
	int result = 0;
	printf("请输入你的命令序号；");
	scanf("%d", &result);
	return result;
}
void showMenuResult(int result)
{
	switch (result)
	{
	case 1:
		printf("您选择了命令：1.录入学生成绩信息。\n");
		break;
	case 2:
		printf("您选择了命令：2.读取学生成绩信息。\n");
		break;
	case 3:
		printf("您选择了命令：3.保存学生成绩信息。\n");
		break;
	case 4:
		printf("您选择了命令：4.打印学生成绩信息。\n");
		break;
	default:
		printf("你输入的命令不存在，请重新输入。\n");
		break;
	}
}
void addStuInfo(struct StuList* link)
{
	struct Student* stu = (struct Student*)malloc(sizeof(struct Student));
	stu->next = NULL;
	printf("请输入学生的学号：");
	scanf("%s", &stu->stuNum);
	printf("请输入学生的年龄：");
	scanf("%d", &stu->age);
	printf("请输入学生的姓名: ");
	scanf("%s", &stu->stuName);
	printf("请输入学生的c语言成绩: ");
	scanf("%d", &stu->score);
	insert(link, 0, stu);
}
void saveStuInfo(struct StuList* link)
{
	if (link->LENGTH == 0)
	{
		printf("没有学生及成绩数据。\n");
		return;
	}
	else
	{
		FILE* fp = fopen("stulnfo.txt", "w");
		if (fp == NULL)
		{
			printf("无法打开文件\n");
			return;
		}
		struct Student* cur = link->HEAD;
		do
		{
			fprintf(fp, "%s %d %s %d", cur->stuNum, cur->age, cur->stuName, cur->score);
			cur = cur->next;
		} while (cur != NULL);
		fclose(fp);
	}
}
void readstuInfo(struct StuList* link)
{
	FILE* fp = fopen("stulnfo.txt", "r");
	if (fp == NULL)
	{
		printf("无法打开文件。\n");
		return;
	}
	char stuNum[NUMLN], stuName[NAMELEN];
	int score, age;
	while (fscanf(fp, "%s%d%s%d", stuNum, &age, stuName, &score) != EOF)
	{
		struct Student* stu = (struct Student*)malloc(sizeof(struct Student));
		strcpy(stu->stuNum, stuNum);
		stu->age = age;
		strcpy(stu->stuName, stuName);
		stu->score = score;
		insert(link, link->LENGTH, stu);
		stu = (struct Student*)malloc(sizeof(struct Student));
	}
	fclose(fp);
}

void showStuScores(struct StuList* link)
{
	struct Student* cur = link->HEAD;
	if (link->LENGTH == 0)
	{
		printf("没有数据。\n");
		return;
	}
	else
	{
		printf("当前共有%d位同学，各位同学的成绩信息如下：\n", link->LENGTH);
		do
		{
			printf("学号：%s,年龄：%d，姓名：%s，成绩：%d\n", cur->stuNum, cur->age, cur->stuName, cur->score);
			cur = cur->next;
		} while (cur != NULL);
	}
}
void freeLink(struct StuList* link)
{
	if (link->LENGTH == 0)
		return;
	struct Student* p = link->HEAD->next;
	while (p)
	{
		link->HEAD->next = p->next;
		free(p);
		p = link->HEAD->next;
	}
	link->LENGTH = 0;
}
int main()
{
	int result = showMenu();
	struct StuList link;
	initLink(&link);
	while (result != -1)
	{
		showMenuResult(result);
		switch (result)
		{
		case 1:
			addStuInfo(&link);
			break;
		case 2:
			freeLink(&link);
			initLink(&link);
			readstuInfo(&link);
			break;
		case 3:
			saveStuInfo(&link);
			break;
		case 4:
			showStuScores(&link);
			break;
		}
		result = showMenu();
	}
	printf("您选择了命令：退出系统。欢迎下次使用！");
	freeLink(&link);
	return 0;
}
