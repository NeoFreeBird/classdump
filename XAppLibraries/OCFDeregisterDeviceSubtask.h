//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFDeregisterDeviceSubtask_h
#define OCFDeregisterDeviceSubtask_h
@import Foundation;

#include "OCFSubtask.h"

@interface OCFDeregisterDeviceSubtask : OCFSubtask

/* class methods */
+ (id)typeNames;
+ (long long)version;
+ (id)deviceRegistrationTokenSubtaskDataKey;

@end

#endif /* OCFDeregisterDeviceSubtask_h */
