﻿1. Como se utiliza o comando 'ps' para:
	
	(a) Mostrar todos os processos rodando na máquina?
		
		ps -a
		
	(b) Mostrar os processos de um usuário?
		
		ps -U "nome_usuario"
		
	(c) Ordenar todos os processos de acordo com o uso da CPU?
		
		ps --sort=pcpu
		
	(d) Mostrar a quanto tempo cada processo está rodando?
		
		ps -eo pid,user,cputime,user,command --sort time

2. De onde vem o nome fork()?
		
	De bifurcação.

3. Quais são as vantagens e desvantagens em utilizar:
		
	(a) system()?
		
		O sistema cuida da criação de processos e sub-processos. Pode ser facilmente utilizado com a biblioteca stdlib.h. Interrompe os processos para executar o que queremos.
	
	(b) fork() e exec()?
		
		O fork serve para criação de programas filhos. O exec cria e executa o programa, diferente do system que faz uma chamada ao sistema.

4. É possível utilizar o exec() sem executar o fork() antes?
		
	Não, o fork tem que ser feito antes do exec.

5. Quais são as características básicas das seguintes funções:
		
	(a) execp()?
		
		Função de chamada de um processo utilizando de um nome buscado por current path.
				
	(b) execv()?
		
		Função de chamada de um processo com nome passado por ponteiros.
		
	(c) exece()?
		
		Função de chamada de um processo que tem argumentos extras, ou seja, tem como passar alguns argumentos para o novo processo.	
		
	(d) execvp()?
		
		Executa o programa a partir de um ponteiro e utilizando dos argumentos do current path.
		
	(e) execve()?
		
		Executa um programa apontado por ponteiros e possui suporte a mais de um argumento.
		
	(f) execle()?
		
		Função de chamada que aceita argumentos do tipo var args.
