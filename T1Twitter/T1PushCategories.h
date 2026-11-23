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
