# ytdownload
Software simples para baixar vídeos do youtube e extrair seus respectivos áudios

Criado em C, realiza uma interface simples de linha de comando para realizar suas funções.
Utiliza o utilitário de linha de comando yt-dlp.
Fiz apenas por diversão.

Nâo me julgue, no momento estou em fase de aprendizado

Compile juntando os arquivos: main.c e utils.c 
tcc main.c utils.c

É um código muito simples. Tentei modular mais eficientemente possível, e também tentei deixá-lo o mais intuitivo que pude para que outros (caso queiram) possam editá-lo.

Por questões de compatibiliade, o yt-dlp usa um ffmpef modificado para corrigir bugs. Então, caso queiram modificar algo na mesclagem de áudio e vídeo, estejam atentos a este detalhe.

O youtube está constantemente atualizando sua forma de servir os vídeos, por isso, as ferramentas do jaez do yt-dlp também precisam estar em constantes atualização. Consequentemente, o yt-dlp do projeto também.

goodby everybody, i've got to go.
