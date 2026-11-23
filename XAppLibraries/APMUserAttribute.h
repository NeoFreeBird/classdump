//
#ifndef APMUserAttribute_h
#define APMUserAttribute_h
@import Foundation;

#include "APMPBUserAttribute.h"
#include "APMValue.h"

@class NSObject, NSString;

@interface APMUserAttribute : NSObject

@property (readonly, nonatomic) NSString *origin;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) APMValue *value;
@property (readonly, nonatomic) double lastSetTimestamp;
@property (readonly, nonatomic) _Bool isPublic;
@property (readonly, nonatomic) APMPBUserAttribute *protoUserAttribute;

/* instance methods */
- (id)initWithOrigin:(id)origin name:(id)name value:(id)value lastSetTimestamp:(double)timestamp;

@end

#endif /* APMUserAttribute_h */
