#define TITLE 0
#define UPLOADER 1
#define UPLOAD_DATE 2
#define THUMBNAIL 3

void show_title(void);
void show_options(void);
int select_option(void);
int get_user_option(void);
int get_yt_link(char link[]);
int download_video_high_quality(char yt_link[]);
int download_audio_high_quality(char yt_link[]);
void show_video_metadata(char yt_link[]);
void show_thumbnail_url(char yt_link[]);
void get_video_metadata(char yt_link[], int metadata_type, char buffer[]);
