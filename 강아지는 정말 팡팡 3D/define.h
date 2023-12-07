GLchar* vertexShaderSource,
* fragmentShaderSource;

GLuint vertexShader,
fragmentShader;

GLuint shaderID;

GLuint VAO[12][12][12],
VBO_position[12][12][12],
VBO_color[12][12][12];
GLuint VAO_bg, VBO_bg, VBO_bgColor;
GLuint VAO_preview, VBO_top, VBO_bottom, VBO_pvColor;

GLuint VAO_out[12][12][12];
GLuint VBO_out[12][12][12], VBO_outColor[12][12][12];

int outSpace[12][12][12];
int out[12];

GLvoid drawScene(GLvoid);
GLvoid Reshape(int w, int h);
GLvoid Keyboard(unsigned char key, int x, int y);
GLvoid GameLoop(int value);

int frameCount = 0;
int frames_needed = 33;
int fCount = 0;
int fneed = 2;
int current_rot = 0;
void make_vertexShaders();
void make_fragmentShaders();
void InitBuffer();
void initGame();
void updateGame();
int isEnded();
int collides(int dir);
int isGameOver();
void killBlock();
void preview();
void goout();

int myBlockID;
int myBlock[3][3][3];
int myRotX, myRotY, myRotZ;
int myX, myY, myZ;
int quit, bye;
int cheat;
