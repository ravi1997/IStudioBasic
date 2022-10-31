set(FILES
	"${CMAKE_CURRENT_SOURCE_DIR}/Boolean.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/Comparable.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/DefaultType.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/Double.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/EquiComparable.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/Equitable.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/GreaterThan.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/GreaterThanEquitable.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/Integer.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/Lang.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/LangDeclaration.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/LessThan.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/LessThanEquitable.hpp"
	"${CMAKE_CURRENT_SOURCE_DIR}/NonEquitable.hpp"
)
set(SUBDIRECTORIES "")
set(RELATIVE_PATH "include/IStudio/Lang")

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
