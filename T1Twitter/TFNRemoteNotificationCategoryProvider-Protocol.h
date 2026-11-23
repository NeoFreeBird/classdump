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
