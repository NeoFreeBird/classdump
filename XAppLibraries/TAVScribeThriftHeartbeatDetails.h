//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVScribeThriftHeartbeatDetails_h
#define TAVScribeThriftHeartbeatDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber, NSObject;

@interface TAVScribeThriftHeartbeatDetails : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *startProgramDateTimeMillis;
@property (copy, nonatomic) NSNumber *endProgramDateTimeMillis;

/* instance methods */
- (id)initWithStartProgramDateTimeMillis:(id)millis endProgramDateTimeMillis:(id)millis;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)marshallerDictionary;

@end

#endif /* TAVScribeThriftHeartbeatDetails_h */
