#include "utils.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

// Array que contém os titpos de dados retornáveis pelo yt-dlp.exe
char * ytdlp_metadatas[] = {"title", "uploader", "upload_date", "thumbnail"};

// Função para mostrar um título simples;
void show_title(void) {
    printf("\n*********************************************\nVDown\nYouTube Video Download\n*********************************************\n");
}

// Função para obter a opção do usuário para Download (áudio ou vídeo)
int get_user_option(void) {
    int resp_user;
    resp_user = scanf("%d", &resp_user);
    return resp_user;
}

// Função para mostrar as opções disponíveis para o usuário
void show_options(void) {
    printf("[1] Download Video\n");
    printf("[2] Download Audio\n");
    printf("[3] View Metadata\n");
    printf("[>] ");
    return;
}

// Função para obter o link do youtube
int get_yt_link(char link[]) {
    printf("\n[Put your link here]\n[>] ");
    scanf("%s", link);
    return 0;
}

//  Função para baixar o video em alta qualidade
int download_video_high_quality(char yt_link[]) {
    char command[1024] = ".\\bin\\yt-dlp.exe -o \".\\downloads\\%(uploader)s - %(title)s.%(ext)s\" -f \"bestvideo+bestaudio\" ";
    strcat(command, yt_link);
    system(command);
    return 0;
}

// Função para baixar o audio em alta qualidade
int download_audio_high_quality(char yt_link[]) {
    char command[1024] = ".\\bin\\yt-dlp.exe -o \".\\downloads\\%(uploader)s - %(title)s.%(ext)s\"  -f bestaudio --extract-audio --audio-format mp3 --audio-quality 0 ";
    strcat(command, yt_link);
    system(command);
    return 0;
}

// obtem os metadados do video do youtube

void get_video_metadata(char yt_link[], int metadata_type, char buffer[]){
    FILE *file;
    char command[1024];
    snprintf(command, sizeof(command), ".\\bin\\yt-dlp.exe --print \"%%(%s)s\" %s", ytdlp_metadatas[metadata_type], yt_link);
    file = popen(command, "r"); // captura o que o comando juntado acima retorna
    fgets(buffer, 1024, file); // transfere o resultado no FILE (que foi resultado do comando) no buffer do comando
    pclose(file);
}
