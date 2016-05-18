#include <stdio.h>
main(){
    int my_array[32];
    int i;

    my_array[0] = "Muhammad Aqiel HM";
    my_array[1] = "Fajar Nazmi Fadillah";
    my_array[2] = "Chiqo Rifky Saputra";

    printf("ABSENSI KELAS XI RPL 2\n\n");

    for(i=0;i<3;i++){
        printf("Data ke-%d =  %s\n",i+1,my_array[i]);
    }
}
