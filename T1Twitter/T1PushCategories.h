//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1PushCategories_h
#define T1PushCategories_h
@import Foundation;

#include "TFNRemoteNotificationCategoryProvider-Protocol.h"

@class NSObject;

@interface T1PushCategories : NSObject <TFNRemoteNotificationCategoryProvider> // (Swift)

/* instance methods */
- (id)notificationCategories;
- (id)init;

@end

#endif /* T1PushCategories_h */
