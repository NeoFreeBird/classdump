//
#ifndef TTALegacyStatusNotificationIdentifiable_Protocol_h
#define TTALegacyStatusNotificationIdentifiable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TTALegacyStatusNotificationIdentifiable <NSObject>

@required

@property (nonatomic, readonly) NSString *statusItemViewModelDidUpdateNotificationName;

/* required instance methods */
- (void)postStatusNotificationUserInfo:(id)info;

@optional

@end

#endif /* TTALegacyStatusNotificationIdentifiable_Protocol_h */
