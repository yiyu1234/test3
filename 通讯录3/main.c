#include "tongxun.h"

void menu()
{
  printf("***********************\n");
  printf("******1.新建联系人******\n");
  printf("******2.查看联系人******\n");
  printf("******3.删除联系人******\n");
  printf("******4.查找联系人******\n");
  printf("******5.修改联系人******\n");
  printf("******6.排序联系人******\n");
  printf("******0.退出本程序******\n");
  printf("***********************\n");
}

int main(int argc,const char *argv[])
{
     struct contact *s=Inint();
    //read_file_to_link(s);
    LoadFromFile(s);
    int a=0;
  
    do{  
      menu();
      putchar(10);
      printf("请选择你想要的功能：");
      scanf("%d",&a);
      getchar();
      switch(a)
      {
        case ADD:
        add(s);
        break;
        case SHOW:
        //read_file_to_link(s);
        //suchu(s);
        show(s);
        break;
        case DEL:
        del(s);
        break;
        case SEARCH:
        search(s);
        break;
        case MODIEY:
        modiey(s);
        break;
        case PAIXU:
        paixu(s);
        break;
        case EXIT:
        In_read(s);
         printf("正在退出，感谢您的使用\n");
         putchar(10);
        putchar(10);
        break;
        default:
        printf("您输入了错误的操作请重新输入\n");
        putchar(10);
        putchar(10);
        break;
   }
}while (a);
 return 0;
}
 
