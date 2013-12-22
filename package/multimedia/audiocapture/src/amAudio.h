// Callback prototype
typedef void (*newDataCallback)(unsigned char *buf, unsigned len);

// Audio capture API
extern int amAudio_Init(newDataCallback callback);
extern int amAudio_Finish(void);
extern int amAudio_Get_Playback_Samplerate(void);
extern int test_capture(char *filename);