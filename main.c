#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
struct Place
{
    char name[500];
    char about[1000];
    char weather[1000];
};
struct details
{
    char tname[100];
    int age;
    char mail[100];
};
void display(struct Place place)
{
    printf("%s\n",place.name);
}
void disamo(int b)
{
    printf("\t\t\t<<<<COSTS>>>>\n\n");
    printf("\t\t1.FOR BUS 5000 INR\n");
    printf("\t\t2.FOR TRAIN 7000 INR\n");
    printf("\t\t3.FOR AIRPLANE 12000 INR\n");
}
void amount(int a)
{
    int t,c;
    printf("\tENTER YOUR CHOICE\n");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
        t=5000*a;
        break;
    case 2:
        t=7000*a;
        break;
    case 3:
        t=12000*a;
        break;
    default:
        printf("\tENTER VALID CHOICE!\n");
        break;
    }
    printf("\tTOTAL PAYABLE AMOUNT IS %d INCLUDING ALL OTHER TAXES.\n\n",t);
}
int main()
{
    int i,n,j,a,r;
    char name[15];
    char mail[100];
    struct Place place[10];
    strcpy(place[0].name,"GIR NATIONAL PARK");
    strcpy(place[0].about,"Wildlife sanctury in India known for asiatic lions,Devalia safari park and kamleshwar dam.");
    strcpy(place[0].weather,"tropical monsoon climate");
    strcpy(place[1].name,"TIRUMALA");
    strcpy(place[1].about,"Tirumala is a spiritual town in tirupati district of the state andra pradesh.Tirupati balaji temple is india's the richest temple.");
    strcpy(place[1].weather,"Rainy and hazy");
    strcpy(place[2].name,"HIMACHAL PRADESH");
    strcpy(place[2].about,"Himachal is known for its adventure activities like ice skating,paragliding,rafting,boating,trekking and horse riding and its wonderful atmosphere.");
    strcpy(place[2].weather,"very cold");
    strcpy(place[3].name,"LAKSHADWEEP");
    strcpy(place[3].about,"Situated in arebian sea,Lakshadweep is a paradise with 36 islands known for its famous beaches,It is one of union territories of india");
    strcpy(place[3].weather,"a warm and humid atmosphere");
    strcpy(place[4].name,"LEH");
    strcpy(place[4].about,"Situated in the northern region of India,Leh is the largest town in the Ladakh known for its landscapes and unique culture.");
    strcpy(place[4].weather,"Depends on the season");
    strcpy(place[5].name,"AMRITSAR");
    strcpy(place[5].about,"The heart of Punjab Amritsar is a city.Amritsar is known for its spiritual atmosphere because of the Golden Temple.");
    strcpy(place[5].weather,"Overall weather in Amritsar is depends on the season.");
    strcpy(place[6].name,"UJJAIN");
    strcpy(place[6].about,"Situated on the banks of the Shipra River, Ujjain is a city in Madhya Pradesh,India known for its cultural and historical temples like mahakal's temple.Ujjain is the city of temples.");
    strcpy(place[6].weather,"Hot like summer in most of season");
    strcpy(place[7].name,"RAMESWARAM");
    strcpy(place[7].about,"Situated on Pamban Island in Tamil Nadu With its beautiful beaches,historic temples like lord shiva's temple and the unique Pamban Bridge");
    strcpy(place[7].weather,"a tropical climate hot and dry summers,moderate monsoon and pleasant winters");
    strcpy(place[8].name,"MAHABALESWAR");
    strcpy(place[8].about,"Situated in the Western Ghats of Maharashtra,It is a hill station known for its lush greenery,wonderful climate and views.");
    strcpy(place[8].weather,"Hill Station with cold weather.");
    strcpy(place[9].name,"KUTCH");
    strcpy(place[9].about,"Situated in Gujarat,Kutch is known for its Great Rann and the rann of kutch is white. The Rann Utsav celebreted in the white desert, inviting visitors in traditional crafts,folk dance and in desert Wildlife Sanctuary.");
    strcpy(place[9].weather,"Depends on season,hotter in day and colder in night.");
    printf("\t\t\t\t\tWELCOME TO TOURS AND TRAVELS\n\n");
    printf("ENTER THE NUMBER OF PERSONS:");
    scanf("%d",&a);
    struct details p[a];
    for(i=0;i<a;i++)
    {
        printf("ENTER THE NAME OF PERSON %d:",i+1);
        scanf("%s",p[i].tname);
        printf("\n");
        printf("ENTER THE AGE OF PERSON %d:",i+1);
        scanf("%d",&p[i].age);
        printf("\n");
        printf("ENTER THE EMAIL ACCOUNT OF PERSON %d:",i+1);
        scanf("%s",p[i].mail);
    }
    printf("\n");
    for(i=0;i<10;i++)
    {
        printf("%d.",i+1);
        display(place[i]);
        printf("\n");
    }
    a:printf("SELECT THE LOCATION NUMBER:\n\n");
    scanf("%d",&n);
    printf("\n");
        printf("ABOUT PLACE:%s\n\n",place[n-1].about);
        printf("WEATHER OF PLACE:%s\n\n",place[n-1].weather);
        printf("\t1.JOIN TRIP\n\n");
        printf("\t2.BACK\n\n");
        printf("\t3.EXIT\n\n");
        printf("ENTER YOUR CHOICE:\n");
        scanf("%d",&j);
        printf("\n");
        if(j==1)
        {
            printf("\tTHANKS FOR JOINING.....\n\n");
            for(i=0;i<a;i++)
            {
            printf("\tPERSON %d DETAILS\n\n",i+1);
            printf("\tNAME:%s\n",p[i].tname);
            printf("\tAGE:%d\n",p[i].age);
            printf("\tEMAIL:%s\n",p[i].mail);
            printf("\n\n");
            }
		    srand(time(0));
            r=rand()%100;
            printf("\tYOUR BOOKING IS CONFORMED.\n\n");
            printf("\tYOUR TICKET NUMBERS:\n\n");
            for(i=0;i<a;i++)
            {
                printf("\t%d\n\n",r);
                r++;
            }
            disamo(1);
            amount(a);
            printf("\tYOU WILL GET ALL THE DETAILS RELATED TRIP ON YOUR REGESTERD GMAIL ACCOUNT.");
        }
        else if(j==2)
        {
            goto a;
        }
        else if(j==3)
        {
            printf("THANKS FOR VISITING US.....");
                return 0;
        }
    return 0;
}
