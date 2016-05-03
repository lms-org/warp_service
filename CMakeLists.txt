set(SOURCES
    "src/warp_service.cpp"
    "src/interface.cpp"
)

set(HEADERS
    "include/warp_service/warp_service.h"
)

include_directories(include)
add_library(warp_service SHARED ${SOURCES} ${HEADERS})
target_link_libraries(warp_service PRIVATE lmscore imaging_detection)
