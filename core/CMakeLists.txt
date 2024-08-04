cmake_minimum_required(VERSION 3.16..3.24)

project(Core	
    VERSION 1.0.0
    DESCRIPTION "Core description"
    LANGUAGES CXX)  

add_library(Core 
  	src/index_buffer.cpp
  	src/renderer.cpp
  	src/rigidbody.cpp
  	src/shader.cpp
  	src/texture.cpp
  	src/vertex_array.cpp
  	src/vertex_buffer_layout.cpp
  	src/vertex_buffer.cpp)
add_library(Core::Core ALIAS Core)

target_include_directories(
    Core 
		PUBLIC 	
			$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
            $<INSTALL_INTERFACE:include>)

target_link_libraries(
	Core
		PRIVATE
			glad::glad
			glfw
			glm::glm
			GLEW::GLEW)
