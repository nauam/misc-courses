﻿1. Apresente as características e utilidades das seguintes funções:
	(a) popen()

		Abre um processo criando um pipe, fork e invocando um shell
		
	(b) pclose()
		
		Fecha o processo criado
		
	(c) fileno()
		
		Retorna o descritor do processo

2. Quais são as vantagens e desvantagens em utilizar:
		
	(a) popen()?
		
		O popen já abre um comando no terminal, com pipe e forking. Ele possui a desvantagem de não poder utilizar o arquivo em paralelo.
		
	(b) exec()?
		
		Ele abre somente o processo, sem conexões, pipes, forking. 
