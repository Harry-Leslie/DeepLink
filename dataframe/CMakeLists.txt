# Set the project name
project (dataframes)

# Add a library with the above sources
add_library(${PROJECT_NAME} src/dataframe.c src/vector.c)
add_library(sub::dataframe ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    PUBLIC ${PROJECT_SOURCE_DIR}/include
)