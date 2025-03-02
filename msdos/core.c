# include "GLFW/glfw3.h"
# include <stdlib.h>

// Prototype until we actually do an implementation
# ifndef GLFW_NON_VERBOSE
#   include <stdio.h>
# endif

/*-----BEGIN TEMPORARY CODEBASE-----*/
# ifndef _lambda
#   define _lambda(v) { return v; }
# endif

# ifndef _empty
#   define _empty { }
# endif

# ifndef Type_array
#   define Type_array(type, len) ((type *) malloc(sizeof(type) * (len)))
# endif

# ifndef Type_new
#   define Type_new(type) Type_array(type, 1)
# endif

# define GLFWwindow_new() Type_new(GLFWwindow)
# define GLFWframebuffer_new() Type_new(GLFWframebuffer)

/*-----END TEMPORARY CODEBASE-----*/

typedef struct {
    uint16_t width, height;

    uint32_t * buffer;

} GLFWframebuffer;

struct GLFWwindow {
    GLFWframebuffer fb;
    const char* title;
};

GLFWwindow* glfwCreateWindow(int width,
    int height,
    const char* title,
    GLFWmonitor* monitor,
    GLFWwindow* parent)
{
    GLFWframebuffer fb;
    GLFWwindow *win = GLFWwindow_new();

    fb.width = width;
    fb.height = height;
    fb.buffer = Type_array(uint32_t, width * height);

    win->title = title;
    win->fb = fb;

    #ifndef GLFW_NON_VERBOSE
    printf("[GLFW/info]: Window created!\n");
    #endif

}

void glfwMakeContextCurrent(GLFWwindow* window)
{
    #ifndef GLFW_NON_VERBOSE
    printf("[GLFW/info]: Current window accepted as a current context!\n");
    #endif
}

void glfwDestroyWindow(GLFWwindow* window) {
    #ifndef GLFW_NON_VERBOSE
    printf("[GLFW/info]: Window destroyed!\n");
    #endif
    free(window);
}

int         glfwWindowShouldClose(GLFWwindow* window) _lambda( GLFW_TRUE );
void        glfwSwapBuffers      (GLFWwindow* window) _empty;

void        glfwPollEvents()    _empty;
void        glfwTerminate ()    _empty;
int         glfwInit      ()    _lambda( GLFW_TRUE );
