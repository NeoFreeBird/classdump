//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASNotificationModel_Protocol_h
#define TASNotificationModel_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString, UIColor;

@protocol TASNotificationModel <NSObject>

@required

@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSString *soundName;
@property (nonatomic, readonly) NSString *iconName;
@property (nonatomic, readonly) UIColor *iconColor;
@property (nonatomic, readonly) double displayDuration;
@property (nonatomic, readonly) long long priority;

@optional

@end

#endif /* TASNotificationModel_Protocol_h */
