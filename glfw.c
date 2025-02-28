# pragma once

# ifndef UNBOUNDED_GLFW_C
#   define UNBOUNDED_GLFW_C 1

	# include "GLFW/glfw3.h"
	# ifdef MSDOS
	/// Things to implement: GLFWwindow, glfwInit(), glfwCreateWindow(), glfwTerminate(), glfwMakeContextCurrent(), glfwSwapBuffers(), glfwWindowShouldClose(), glfwSwapBuffers(), glfwPollEvents(): (9)
	/// Implemented: glfwInit(): (1)
	/// GLFW3-Unbounded Progress: [ 11% ]
	#   include "msdos/core.c"
	# endif

# endif // UNBOUNDED_GLFW_C
