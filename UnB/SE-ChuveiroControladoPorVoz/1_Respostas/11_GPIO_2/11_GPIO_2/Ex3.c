﻿#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <signal.h>
#include <time.h>
#include <sys/types.h>

int fd;
int fp[2];

void fechar(){
	close(fd);
	fd = open("/sys/class/gpio/unexport",O_WRONLY);
	write(fd,"20",2);
	write(fd,"21",2);
	close(fd);
	printf("Fechando programa\n");
	sleep(1);
	exit(0);
}


int main(){
	pid_t pid_id;
	pipe(fp);
	pid_id = fork();

	signal(SIGINT,fechar);

	if(pid_id == 0){       //processo filho
		char bf='0';
		int freq = 1;        //Hz

    printf("Realizando o export 20\n"); //set export
		fd = open("/sys/class/gpio/export",O_WRONLY);
		write(fd,"20",2);
		close(fd);
    
		printf("Iniciando o pin 20 como saída\n");	//set saída
		fd = open("/sys/class/gpio/gpio20/direction",O_WRONLY);
		write(fd,"out",4);
		close(fd);

		fd = open("/sys/class/gpio/gpio20/value",O_WRONLY);
		printf("Iniciando o blink em 20\n");
		while(1){
			printf("STATUS = %d\n",read(fp[0],&bf,sizeof(bf)));
			if(bf == '1'){
				freq = freq*2;
				bf = 0;
			}
			printf("Frequencia = %d BF = %c\n",freq,bf);
			write(fd,"1",2);
			usleep(500000/freq);
			write(fd,"0",2);
			usleep(500000/freq);
		}
	}else{         //processo pai
		char btn;
		
		printf("Realizando o export 21\n"); //set export
		fd = open("/sys/class/gpio/export",O_WRONLY);
		write(fd,"21",2);
		close(fd);

		printf("Iniciando o pin como saída 21\n"); //set saída
		fd = open("/sys/class/gpio/gpio21/direction",O_WRONLY);
		write(fd,"in",4);
		close(fd);

		fd = open("/sys/class/gpio/gpio21/value",O_RDWR);
		printf("Pronto para capturar gpio21\n");
		while(1){
			lseek(fd,0,SEEK_SET);
			read(fd,&btn,2);
			printf("BTN = %c\n",btn);
			if(btn == '1'){
				write(fp[1],&btn,sizeof(btn));
			}
			usleep(500000);
		}
	}
	return 0;
}