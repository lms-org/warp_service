#include "warp_service/warp_service.h"
#include "lms/imaging/warp.h"

namespace warp_service {

bool WarpService::init() {
    lms::imaging::WarpContent::instance.fromConfig(&config());
    lms::imaging::WarpContent::instance.initialized = true;

    return true;
}

void WarpService::destroy() {
}

} // namespace warp_service
