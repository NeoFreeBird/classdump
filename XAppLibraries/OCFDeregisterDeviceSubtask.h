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
