#include <locale.h>
#include "utils.h"

int main(int argc, char * argv[]) {
    setlocale(LC_ALL, "");

    int user_choice;
    char yt_link[1024];
    char buffer_meta[1024];

    show_title(); // mostra um título simples 

    show_options(); // mastra as opções disponíveis para o usuário
    // Obtem a opção de operação do usuário
    scanf("%d", &user_choice);

    get_yt_link(yt_link); // Obtem o link do youtube

    if (user_choice==1) {
        download_video_high_quality(yt_link); // baixa o video do link em alta qualidade

    } else if (user_choice==2) {
        download_audio_high_quality(yt_link); // baixa apenas o audio do video em alta qualidade

    } else if (user_choice==3) {
        //show_video_metadata(yt_link); // mostra metadados relevantes do video para o usuário
        get_video_metadata(yt_link, TITLE, buffer_meta);
        printf("%s", buffer_meta);
        get_video_metadata(yt_link, UPLOADER, buffer_meta);
        printf("%s", buffer_meta);
        get_video_metadata(yt_link, UPLOAD_DATE, buffer_meta);
        printf("%s", buffer_meta);
        get_video_metadata(yt_link, THUMBNAIL, buffer_meta);
        printf("%s", buffer_meta);

    } else if (user_choice==4) {
        return;
    };

    return 0;
}
