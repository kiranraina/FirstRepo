#include <stdio.h>
struct a
{
    char name[10];
    char address[50];
};
 int main()
    {
//     struct a
//     {
//         struct b{

//         }bb;
//         struct c{
//             char address[50];
//             int sal;
////         }cc;
//     };
//     struct a *ptr;
     struct a aa={"Niranjan","samartha apartment,t tnagar,Nagpur"};
     ptr(&aa);
//     printf("\n %s %s %d %d",ptr->bb.name,ptr->cc.address,ptr->cc.sal,ptr->bb.age);
//     static struct a arr[]={ {"Nagpur",arr+2},
//                                                   {"Mumbai",arr},
//                                                   {"Banglore",arr+1}
//                                                  };
//     struct a *p[3];
//     int i;
//     for(i=0;i<=2;i++)
//         p[i]=arr[i].ptr;
//     printf("%s\n",p[0]->str);
//      printf("%s\n",(*p)->str);
//         printf("%s\n",(**p));
//       struct a arr={
//                     {"Nagpur",
//                      "Mumbai",
//                      "Banglore"
//                     },
//                       {"Maharastra",
//                        "Maharastra",
//                        "karnataka"
//                       },
//                    };
//       printf("%s\n%s\n",arr.city,arr.state);
//       printf("%s\n%s\n",arr.city+2,arr.state+2);

        return 0;
    }
 ptr( struct a *ab){
      printf("%s",ab->name);
 }



