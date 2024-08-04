#include <models/rigidbody.h>
#include <renderer/renderer.h>

#include <GL/glew.h>
#include <GLFW/glfw3.h>

#include <iostream>

int main()
{
    GLFWwindow* window;

    // Initialize the library
    if (!glfwInit())
        return -1;

    // Use modern OpenGL
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Create a windowed mode window and its OPENGL context
    window = glfwCreateWindow(960, 540, "Rigidbody Simulation", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);

    glfwSwapInterval(2);

    if (glewInit() != GLEW_OK)
        std::cerr << "Error!" << std::endl;

    std::cout << glGetString(GL_VERSION) << std::endl;

    GLCall(glEnable(GL_BLEND));
    GLCall(glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA));

    Renderer renderer;
    while (!glfwWindowShouldClose(window))
    {
        // Render here
        GLCall(glClearColor(0.0f, 0.0f, 0.0f, 1.0f));
        renderer.clear();

        // Swap front and back buffers
        glfwSwapBuffers(window);

        // Poll for and process events
        glfwPollEvents();
    }

    return 0;
}