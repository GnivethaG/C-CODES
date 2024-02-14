#include<stdio.h>
void main()
{
    char a[100],b[100];
    printf("Enter the String");
    scanf("%s",&a);
    char *temp;
    temp=a;
    int count=0;
    while(*temp!='\0')
    {

        if((*temp=='a')||(*temp=='e')||(*temp=='i')||(*temp=='o')||(*temp=='u')||(*temp=='A')||(*temp=='E')||(*temp=='I')||(*temp=='O')||(*temp=='U'))
        {
            while((*temp=='a')||(*temp=='e')||(*temp=='i')||(*temp=='o')||(*temp=='u')||(*temp=='A')||(*temp=='E')||(*temp=='I')||(*temp=='O')||(*temp=='U'))
            {

                count=count+1;
                temp++;
            }


            if((*(temp+1)!='a')||(*(temp+1)!='e')||(*(temp+1)!='i')||(*(temp+1)!='o')||(*(temp+1)!='u')||(*(temp+1)!='A')||(*(temp+1)!='E')||(*(temp+1)!='I')||(*(temp+1)!='O')||(*(temp+1)!='U'))
            {


                while(count!=0)
                {


                    *(temp-(count))=count;
                     count--;

                }



            }
        }







        temp++;

    }

    for(int i=0;a[i]!='\0';i++)
    {
        if((a[i]>0)&&(a[i]<=9))
           {
               printf("%d",a[i]);
           }
        else
            {
                printf("%c",a[i]);
            }
    }




}
