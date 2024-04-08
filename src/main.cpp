#include <GLFW/glfw3.h>

int main(void)
{
    GLFWwindow* window;

if (!glfwInit())
    return -1;

// Устанавливаем параметры GLFW для прозрачности окна (если поддерживается)
glfwWindowHint(GLFW_TRANSPARENT_FRAMEBUFFER, GLFW_TRUE);

GLFWwindow* window = glfwCreateWindow(640, 480, "Transparent Window", NULL, NULL);
if (!window)
{
    glfwTerminate();
    return -1;
}

glfwMakeContextCurrent(window);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        /* Render here */
        //glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}

