/*C Program a structure which stores information about hotels which stores information about name,
grade, room charge, no of rooms.*/
#include <stdio.h>
struct hotel
{
    char name[20];
    float grade,room_charge;
    int no_room;
};

int main(int argc, char *argv[])
{
    struct hotel h;
    printf("Enter the hotel name\n");
    scanf( "%s",&h.name);
    printf("Enter the hotel grade\n");
    scanf( "%f",&h.grade);
    printf("Enter the hotel room_charge\n");
    scanf( "%f",&h.room_charge);
    printf("Enter the hotel no_room\n");
    scanf( "%d",&h.no_room);

    printf("print the hotel details\n");
    printf("%s\n",h.name);
    printf("%.2f\n",h.grade);
    printf("%.2f\n",h.room_charge);
    printf("%d\n",h.no_room);

    return 0;
}
