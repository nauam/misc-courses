﻿Para todas as questões, escreva os comandos correspondentes no terminal.

1. Escreva o texto "Ola mundo cruel!" em um arquivo denominado "Ola_mundo.txt". Apresente o conteúdo deste arquivo no terminal.

        echo "ola mundo cruel!" >Ola_mundo.txt
        cat ola_mundo.txt

2. Apresente o nome de todos os arquivos e pastas na pasta 'root'.

        ls /

3. Apresente o tipo de todos os arquivos e pastas na pasta 'root'.

        

4. Apresente somente as pastas dentro da pasta 'root'.

        ls -d */

5. Descubra em que dia da semana caiu o seu aniversário nos últimos dez anos.

        date -d "29/04/2019"
        date -d "29/04/2018"
        date -d "29/04/2017"
        date -d "29/04/2016"
        date -d "29/04/2015"
        date -d "29/04/2014"
        date -d "29/04/2013"
        date -d "29/04/2012"
        date -d "29/04/2011"
        date -d "29/04/2010"

Para as questões a seguir, use a pasta no endereço https://github.com/DiogoCaetanoGarcia/Sistemas_Embarcados/raw/master/Questoes/02_Intro_Linux_arqs.zip

6. Liste somente os arquivos com extensão .txt.

        ls *.txt

7. Liste somente os arquivos com extensão .png.

        ls *.png

8. Liste somente os arquivos com extensão .jpg.

        ls *.jpg

9. Liste somente os arquivos com extensão .gif.

        ls *.gif

10. Liste somente os arquivos que contenham o nome 'cal'.

        ls | grep cal

11. Liste somente os arquivos que contenham o nome 'tux'.

        ls | grep tux

12. Liste somente os arquivos que comecem com o nome 'tux'.

        ls | grep tux*
