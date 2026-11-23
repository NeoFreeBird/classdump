//
#ifndef APMEvent_h
#define APMEvent_h
@import Foundation;

#include "APMPBEvent.h"
#include "NSCopying-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSObject, NSString;

@interface APMEvent : NSObject <NSCopying>

@property (readonly, nonatomic) APMPBEvent *protoEvent;
@property (readonly, nonatomic) NSString *origin;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) double previousTimestamp;
@property (readonly, nonatomic) NSDictionary *parameters;
@property (nonatomic) _Bool conversion;
@property (nonatomic) _Bool realtime;
@property (nonatomic) _Bool debug;

/* class methods */
+ (id)eventFromEditEvent:(id)event;

/* instance methods */
- (id)initWithEventProto:(id)proto;
- (id)initWithOrigin:(id)origin isPublic:(_Bool)_public name:(id)name timestamp:(double)timestamp previousTimestamp:(double)timestamp parameters:(id)parameters;
- (id)copyWithPreviousTimestamp:(double)timestamp;
- (id)copyWithParameters:(id)parameters;
- (_Bool)shouldValidateParams;
- (_Bool)isConversion;
- (_Bool)isRealtime;
- (_Bool)isDebug;
- (void)applyParameters:(id)parameters isPublic:(_Bool)_public;
- (_Bool)addScreenParameters:(id)parameters;
- (id)editEvent;
- (id)copyWithZone:(struct _NSZone *)zone;

@end

#endif /* APMEvent_h */
