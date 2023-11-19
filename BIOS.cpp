/*Title*/
/*Reboot de system from the BIOS*/

/*Preprocessor*/
#include<stdio.h>
#include<stdlib.h>


int main(){
	printf("Before continuing, make sure yout work is already saved");
	printf("¿Do you want to reboot from the BIOS in 10 seconds?");
	if(system("choice") == 2){
		
	}
	else{
		system("shutdown -r -fw -t 10");
		printf("\nThe computer will be rebooting from the BIOS");
		printf("\nDo you want to cancel?");
		if(system("choice") == 2){
			printf("Rebooting");
		}
		else{
			system("shutdown /a");
		}
	}
return 0;
}


