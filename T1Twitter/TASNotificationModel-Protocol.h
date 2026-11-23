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
