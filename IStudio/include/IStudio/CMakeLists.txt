set(FILES
	"${CMAKE_CURRENT_SOURCE_DIR}/IStudio.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/IStudioDeclaration.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/Types.hpp"
)
set(SUBDIRECTORIES "Lang" "Test")
set(RELATIVE_PATH "include/IStudio")

#Add all subdirectories
foreach(VAR ${SUBDIRECTORIES})
	add_subdirectory(${VAR})
endforeach()

if(FILES)
	#Add source files to target
	target_sources("${PROJECT_NAME}" PRIVATE ${FILES})

	#Install our source files
	install(FILES ${FILES} DESTINATION ${RELATIVE_PATH})
endif()
