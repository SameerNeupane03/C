#include<stdio.h>
enum day
{
  sun,mon,tue,wed,thu,fri,sat  
};
void main()
{
    enum day d1;
    d1=tue;
    printf("%d",d1);
}
