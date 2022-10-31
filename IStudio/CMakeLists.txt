add_library("${PROJECT_NAME}" "")
add_library(IStudio::IStudio ALIAS "${PROJECT_NAME}")

set(ISTUDIO_EXPORT_FILE "IStudio-Exports")
install(TARGETS "${PROJECT_NAME}" EXPORT "${ISTUDIO_EXPORT_FILE}")

target_include_directories("${PROJECT_NAME}" PUBLIC
	"$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>"
	"$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}>" #IStudio_export.h
	"$<INSTALL_INTERFACE:include>" #${CMAKE_INSTALL_PREFIX}/include
)

if(NOT BUILD_SHARED_LIBS)
	set(STATIC_POSTFIX "-s")
	set_target_properties("${PROJECT_NAME}" PROPERTIES
	COMPILE_FLAGS -DISTUDIO_STATIC_DEFINE)
endif()

#Rename target Foo
set_target_properties("${PROJECT_NAME}" PROPERTIES
	DEBUG_POSTFIX "${STATIC_POSTFIX}-d"
	RELEASE_POSTFIX "${STATIC_POSTFIX}"
	MINSIZEREL_POSTFIX "${STATIC_POSTFIX}-mr"
	RELWITHDEBINFO_POSTFIX "${STATIC_POSTFIX}-rd"
)

include("GenerateExportHeader")
generate_export_header("${PROJECT_NAME}")
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/IStudio_export.h" DESTINATION "include")


add_subdirectory("include")
add_subdirectory("src")

set(ISTUDIO_CONFIG_DIR "lib/cmake/${PROJECT_NAME}")
configure_file("${IStudio_SOURCE_DIR}/cmake/IStudioConfig.cmake.in" "${IStudio_BINARY_DIR}/${ISTUDIO_CONFIG_DIR}/IStudioConfig.cmake")
install(FILES "${IStudio_BINARY_DIR}/${ISTUDIO_CONFIG_DIR}/IStudioConfig.cmake" DESTINATION "${ISTUDIO_CONFIG_DIR}")
install(EXPORT "${ISTUDIO_EXPORT_FILE}" DESTINATION "${ISTUDIO_CONFIG_DIR}" NAMESPACE "IStudio::")
