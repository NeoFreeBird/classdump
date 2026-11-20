//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNRemoteNotificationCategoryProvider_Protocol_h
#define TFNRemoteNotificationCategoryProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNRemoteNotificationCategoryProvider <NSObject>

@required

/* required instance methods */
- (id)notificationCategories;

@optional

@end

#endif /* TFNRemoteNotificationCategoryProvider_Protocol_h */
