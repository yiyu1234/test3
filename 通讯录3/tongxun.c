#include"tongxun.h"
#include <strings.h>
long MyStrlen(char *s) 
 { long len = 0;
 while(*s != '\0') 
 { len++;
s++; 
}return len; 
 }

int mystrcmp(char *s1,char *s2)
{
        while (*s1 != '\0' && *s2 != '\0')
        {
            if (*s1 > *s2)
            {
                return 1;
            }
            if (*s1 < *s2)
            {
                return -1;
            }
            s1++;
            s2++;
        }
        if(*s1 == '\0' && *s2 == '\0')
        {
             return 0;
        }
        if (*s1 != '\0' && *s2 == '\0')
        {
          return 1;
        }
        if(*s1 == '\0' &&  *s2!= '\0')
        {
          return -1;
        }
}


bool LinKlistIsEmpty(struct contact *head)
 { return head->next == NULL ? 1 : 0; }
 struct contact * Inint()
 {
    struct contact *head = (struct contact *)malloc(sizeof(struct contact)); 
    //给指针域赋初始值为空 
    head->next = NULL;
     return head;
 }

int FINDNMAE(struct contact *head,char name[MAX_NAME])
{    int i=0;
    struct contact*p=head;
    while(p->next!=NULL)
    {
        p=p->next;
        ++i;
       if(0 == mystrcmp(name,p->name))
       {
        return i;
       }
    }
    return (int)-1;
}

void add(struct contact *head)
{     int a;
        while(1)
       { 
      struct contact *s=(struct contact *)malloc(sizeof(struct contact));
        s->next=NULL; 
        printf("请输入名字:");
        scanf("%s",s->name);
        getchar();
        //  for ( a= 0; a < 20; a++)
        // {
        //     while
        //     (s->name[a]>'0'&& s->name[a]<'9')
        //     {
        //         printf("输入的名字有错误请重新输入\n");
        //         printf("名字：");
        //         scanf("%s",s->name);
        //         getchar();
        //     }
        // }
            printf("请输入电话:");
        scanf("%s",s->telpone);
        getchar();
            //    while(MyStrlen(s->telpone)!=11)
            //    {
            //     printf("电话号码输入错误,请重新输入\n");
            //     printf("请输入电话:");
            //     scanf("%s",s->telpone);
            //     getchar();
            //    }
        printf("请输入性别:");
        scanf("%s",s->sex);
        getchar();
        printf("请输入年龄:");
        scanf("%s",s->age);
        getchar();
        printf("请输入地址:");
        scanf("%s",s->address);
        getchar();
        s->next = head->next;
       head->next = s;
       printf("选择是否添加:1是   2否\n");
       int choice = 0;
       scanf("%d",&choice);
       getchar();
       if (choice==2)
       {
          
          break;
       
            
       }
   
       }
}
       void show(struct contact *head)
       {   
       struct contact *p= head->next; 
         if (p==NULL)
         {
            return;
         }
          else{
         //循环遍历单链表，直到p的指针域为空，结束循环遍历
         printf("%s\t %s\t %s\t %s\t %s\t\n","名字","性别","电话","年龄","地址");
         while(p->next != NULL) 
          {
           
    printf("%s\t %s\t %s\t %s\t %s\t \n",
            p->name,
            p->sex,
            p->telpone,
            p->age,
            p->address
            );

            p = p->next;
             }
             printf("%s\t %s\t %s\t %s\t %s\t \n",
            p->name,
            p->sex,
            p->telpone,
            p->age,
            p->address
            );
             }
       }
             void search(struct contact *head)
             {   int i;
                char name[MAX_NAME];
            
               struct contact *p=head;
                printf("请输入要查找的联系人的名字\n");
                scanf("%s",name);
                getchar();
                int a=FINDNMAE(head,name);
           if(a==-1)
               {
                   printf("没有找到对应的信息\n");
               }
               else
               {
                 for(i=0;i<a;i++)
                 {
                    p=p->next;
                 }
                 printf("%s\t %s\t %s\t %s\t %s\t \n","名字","性别","电话","年龄","地址");
                 printf("%s\t %s\t %s\t %s\t %s\t \n",
            p->name,
            p->sex,
            p->telpone,
            p->age,
            p->address);
             }
          } 





          struct contact * del(struct contact *head)
          {
          int i;
          int b;
                char name[MAX_NAME];
                struct contact *p=head;
                struct contact *w=head;
                printf("请输入要查找的联系人的名字\n");
                scanf("%s",name);
                getchar();
                int a=FINDNMAE(head,name);
               if(a==-1)
               {
                   printf("没有找到对应的信息\n");
               }
               else if(a==1)
               {
               struct contact *tmp = head->next;
                 head->next = head->next->next;
                  free(tmp);
                 tmp = NULL;
               }
               else
               {
                 for(i=0;i<a;i++)
                 {
                    p=p->next;
                 }
                 for(b=0;b< (a-1);b++)
                 {
                    w=w->next;
                 }
                 struct contact *q=p->next;
                 w->next=q;
                 free(p);
                 p=NULL;
                 
          }
          }
void modiey( struct contact *head)
{
    if(LinKlistIsEmpty(head)) 
    { 
    printf("链表为空");
     return; 
     }
     int input=0;
     int i;
          int a;
                char name[MAX_NAME];
                struct contact *p=head;
                printf("请输入要查找的联系人的名字\n");
                
                scanf("%s",name);
                getchar();
                int b=FINDNMAE(head,name);
               if(b==-1)
               {
                   printf("没有找到对应的信息\n");
               }
               else
               {
                for(i=0;i<b;i++)
                 {
                    p=p->next;
                 }
        do
        {
                printf("请选择你要进行的操作:修改名字:1 修改电话:2 修改性别:3 修改年龄:4 修改地址:5 退出修改请按0\n");
            scanf("%d",&input);
            getchar();
            switch (input)
            {
              case 1:
             printf("请输入名字:");
             scanf("%s",p->name);
             getchar();
        //       for ( a = 0; a< 20; a++)
        // {
        //     while(p->name[a]>'0'&& p ->name[a]<'9')
        //     {
        //         printf("输入的名字有错误请重新输入\n");
        //         printf("名字：");
        //         scanf("%s",p->name);
        //         getchar();
        //     }
        // }
             printf("修改成功\n");
             break;
             case 2:
             printf("请输入电话:");
             scanf("%s",p->telpone);
             getchar();
            //   while(MyStrlen(p->telpone)!=11)
            //    {
            //     printf("电话号码输入错误,请重新输入\n");
            //     printf("请输入电话:");
            //     scanf("%s",p->telpone);
            //     getchar();
            //    }
             printf("修改成功\n");
                break;
            case 3:
            printf("请输入性别:");
            scanf("%s",p->sex);
            getchar();
             printf("修改成功\n");
             break;
            case 4:
           printf("请输入年龄:");
          scanf("%s",p->age);
          getchar();
            printf("修改成功\n");
             break;
             case 5:
         printf("请输入地址:");
        scanf("%s",p->address);
        getchar();
        printf("修改成功\n");
         break;
            default:
        printf("您输入了错误的操作请重新输入\n");
        putchar(10);
        putchar(10);
                break;
            }
        } while (input); 
               }
}
void paixu(struct contact *head)
{
 struct contact *q,*p,*r;
 p=head->next;
head->next=NULL;
 while (p!=NULL)
 {
    q=p;
    p=p->next;
    r=head;
    while(r->next!=NULL && (mystrcmp(r->next->name,q->name)==1))
    {
        r=r->next;

    }
 q->next=r->next;
 r->next=q;
}
}
void In_read(struct contact *head)
{struct contact *p=head->next;
    FILE *fp = fopen("./data.txt", "a");
        if (fp == NULL)
        {
            perror("fopen");
            return;
        }
        while(p!=NULL)
        {
        if (1 != fwrite(p, sizeof(struct contact), 1, fp))
        {
            perror("fwrite");
            return;
        }
        p=p->next;
        }
        fclose(fp);
}
void LoadFromFile( struct contact *head)
{
    FILE *fp;
    fp = fopen("./data.txt", "r");
    if (fp == NULL)
    {
        perror("fopen");
        exit(-1);
    }
    struct contact *tmp2 = head;
    int ret;
    // person *tmp = PERSONCREATE();
    // while ((ret = fread(tmp, sizeof(person), 1, fp)) != 0)
    // {
                struct contact *tmp = Inint();
    while (1)
    {
                        struct contact *tmp = Inint();
        if (ret = fread(tmp, sizeof(struct contact), 1, fp) == 0)
            break;
        while (tmp2->next != NULL && mystrcmp(tmp2->next->name, tmp->name) < 0)
        {
            tmp2 = tmp2->next;
        }
        tmp->next = tmp2->next;
        tmp2->next = tmp;
    }
    if (feof(fp) == 0)
    {
        perror("feof");
        exit(-1);
    }
    else
        printf("通讯录加载成功！\n");
    fclose(fp);
}
// void read_file_to_link(struct contact *head)
// {
    
// struct contact *tmp2 = head;
//      FILE *fp;
//     fp = fopen("./data.txt", "r");
// if(head == NULL && fp == NULL)

// {
// printf("链表或文件不存在！\n");

// return ;

// }

// while(fp!=NULL&& feof(fp)==0)
// {

//     fscanf(fp,"%20s\t %10s\t %12s\t %4s\t %30s\t\n",tmp2->name,tmp2->sex,tmp2->telpone,tmp2->age,tmp2->address );
//     if(tmp2->next!=NULL)
//     {
//         tmp2=tmp2->next;
//     }

// printf("通讯录加载成功！\n");
// fclose(fp);
//  }
// }

