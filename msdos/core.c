# ifndef _lamba
#   define _lambda(v) { return v; }
# endif

struct GLFWwindow {};

static GLFWwindow DEFAULT_WINDOW;


int         glfwInit()          _lambda( GLFW_TRUE );
GLFWwindow* glfwCreateWindow()  _lambda( DEFAULT_WINDOW );
