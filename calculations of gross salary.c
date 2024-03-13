#include<math.h>
main()
{
    float bs,da,hra,gs;
    printf("enter bs");
    scanf("%f",&bs);
    if(bs<1500)
    {
        hra=bs*0.1;
        da=bs*0.9;
    }
    else
    {
        hra=500;
        da=bs*0.98;
    }

   {

    gs=bs=hra=da;
    printf("gross salary is%f rupees");
}

}
