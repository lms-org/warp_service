#ifndef WARP_SERVICE_H
#define WARP_SERVICE_H

#include <lms/service.h>
#include <lms/imaging/transform_image.h>

namespace warp_service {

/**
 * @brief The warp service initializes the warp singleton instance
 * lms::imaging::WarpContent::instance with a given config.
 **/
class WarpService : public lms::Service {
    lms::imaging::Homography m_homo;
public:
    bool init() override;
    void destroy() override;

    lms::imaging::Homography getHomography(){
        return m_homo;
    }
};

} // namespace warp_service

#endif // WARP_SERVICE_H
