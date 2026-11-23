//
#ifndef APMConditionalUserProperty_h
#define APMConditionalUserProperty_h
@import Foundation;

#include "APMEvent.h"
#include "APMValue.h"
#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface APMConditionalUserProperty : NSObject <NSCopying>

@property (nonatomic) double creationTimestamp;
@property (nonatomic) _Bool active;
@property (nonatomic) double triggeredTimestamp;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) APMValue *value;
@property (copy, nonatomic) NSString *triggerEventName;
@property (nonatomic) double triggerTimeout;
@property (nonatomic) double timeToLive;
@property (copy, nonatomic) APMEvent *triggeredEvent;
@property (copy, nonatomic) APMEvent *timedOutEvent;
@property (copy, nonatomic) APMEvent *expiredEvent;

/* instance methods */
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isActive;

@end

#endif /* APMConditionalUserProperty_h */
