#include "warp_service/warp_service.h"
#include "lms/imaging/warp.h"

namespace warp_service {

bool WarpService::init() {
    lms::imaging::WarpContent::instance.fromConfig(&config());
    lms::imaging::WarpContent::instance.initialized = true;
    //they are the other way round...
    m_homo.cam2world = lms::imaging::WarpContent::instance.cam2world;
    m_homo.world2cam = lms::imaging::WarpContent::instance.world2cam;

    return true;
}

void WarpService::destroy() {
}

} // namespace warp_service
