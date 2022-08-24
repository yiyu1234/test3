#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#define MAX_NAME 20
#define MAX_TEL 12
#define MAX 1024
#define MAX_SEX 10
#define MAX_ADD 30
struct contact
{   
    char name[MAX_NAME];
    char  telpone[MAX_TEL];
    char  sex[MAX_SEX];
    char    age[3];
    char address[MAX_ADD];
    struct  contact *next;

};
struct contact p1;
struct contact p2;
struct contact *LinkList;
enum option
{
  EXIT,
  ADD,
  SHOW,
  DEL,
  SEARCH,
  MODIEY,
   PAIXU,
};


 
   
//声明函数
struct contact *  Inint(); //初始化通讯录
void add(struct contact* head);   //增加联系人
bool LinKlistIsEmpty( struct contact *head);  //入参检查
void show(struct contact *head);  //查看联系人
struct contact * del(struct contact *head);   //删除联系人
void search(struct contact *head);// 查找联系人
void modiey(struct contact *head);//修改联系人
int FINDNMAE(struct contact *head,char name[MAX_NAME]);//查找姓名功能
int mystrcmp(char *s1,char *s2);//字符串对比
void paixu(struct contact *p1);//首字母排序
bool LinKlistIsEmpty(struct contact *head);
void In_read(struct contact *head);
void suchu(struct contact *head);
//void read_file_to_link(struct contact *head);
void LoadFromFile( struct contact *head);