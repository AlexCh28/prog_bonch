// #include<stdio.h>
// #include<string.h>

// const int CAR_MAX_SPEED = 300;
// const int VELO_MAX_SPEED = 70;
// const int MOTO_MAX_SPEED = 200;
// const int AIRPLANE_MAX_SPEED = 850;
// const int TRAIN_MAX_SPEED = 603;

// enum Transport
// {  
//     CAR,
//     VELO,
//     MOTO,
//     TRAIN,
//     AIRPLANE
// }

// Transport getTransport(char type[])
// {
//     if (strcmp(type, "а"))
//     {
//         return Transport.CAR;
//     }
// }

// int main()
// {
//     char transportType[]="";
//     int maxSpeed = 0;

//     printf("Введите признак транспорта и нажмите <Enter>-> ");
//     scanf("%s", &transportType);



//     switch (transportType)
//     {
//     case '1':
//         maxSpeed = CAR_MAX_SPEED;
//         break;

//     case '2':
//         maxSpeed = VELO_MAX_SPEED;
//         break;

//     case '3':
//         maxSpeed = MOTO_MAX_SPEED;
//         break;

//     case '4':
//         maxSpeed = AIRPLANE_MAX_SPEED;
//         break;

//     case '5':
//         maxSpeed = TRAIN_MAX_SPEED;
//         break;
    
//     default:
//         printf("Такого транспорта нет\n");
//         break;
//     }

//     if (maxSpeed != 0)
//     {
//         printf("Максимальная скорость данного транспортного средства: %d\n", maxSpeed);
//     }

//     return 0;
// }