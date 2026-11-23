//
#ifndef APMPEvent_h
#define APMPEvent_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSObject, NSString;

@interface APMPEvent : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) double timestamp;
@property (readonly, nonatomic) NSDictionary *parameters;

/* instance methods */
- (id)initWithName:(id)name timestamp:(double)timestamp parameters:(id)parameters;
- (id)parameterForName:(id)name;
- (void)setParameter:(id)parameter forName:(id)name;
- (_Bool)hasParameterName:(id)name;
- (_Bool)isEqualToEvent:(id)event;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* APMPEvent_h */
