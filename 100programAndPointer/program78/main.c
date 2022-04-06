        /*C Program to accept values into an array and print array in reverse and original format by using
    three different functions.*/
    #include <stdio.h>
    void print(int);
    void show(int *);
    void display(int *);

    int main(int argc, char *argv[])
    {
        int  number[5];
         printf("Enter the 5 number\n");
         for(int i=0;i<5;i++){
                scanf("%d",&number[i]);
         }
         //print fuction call
          printf("print data called orignal array\n");
         for(int i=0;i<5;i++){
               print(number[i]);
         }
         printf("print data called reverse array\n");
        for(int i=4;i>=0;i--){
              print(number[i]);
        }
         //show function
         printf("show data called orignal array\n");
         for(int i=0;i<5;i++){
               show(&number[i]);
         }
         printf("print data called reverse array\n");
        for(int i=4;i>=0;i--){
             show(&number[i]);
        }
         //display function
              printf("display data called  array\n");
               display(number);
        return 0;
    }
    void print(int m){
        printf("%d\n",m);
    }
    void show(int *n){
        printf("%d\n",*n);
    }
    void display(int *k){
        for(int i=0;i<5;i++){
        printf("%d\n",*(k+i));
        }
        for(int i=4;i>=0;i--){
        printf("%d\n",*(k+i));
        }
    }
