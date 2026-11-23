//
#ifndef T1StandardSpaceNotificationModel_h
#define T1StandardSpaceNotificationModel_h
@import Foundation;

#include "TASNotificationModel-Protocol.h"

@class NSObject, NSString, UIColor;

@interface T1StandardSpaceNotificationModel : NSObject <TASNotificationModel>

@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *soundName;
@property (copy, nonatomic) NSString *iconName;
@property (retain, nonatomic) UIColor *iconColor;
@property (nonatomic) double displayDuration;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */

@end

#endif /* T1StandardSpaceNotificationModel_h */
