#ifndef WARP_SERVICE_H
#define WARP_SERVICE_H

#include <lms/service.h>

namespace warp_service {

/**
 * @brief The warp service initializes the warp singleton instance
 * lms::imaging::WarpContent::instance with a given config.
 **/
class WarpService : public lms::Service {
public:
    bool init() override;
    void destroy() override;
};

} // namespace warp_service

#endif // WARP_SERVICE_H
