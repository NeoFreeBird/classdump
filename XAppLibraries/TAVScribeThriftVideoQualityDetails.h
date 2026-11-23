//
#ifndef TAVScribeThriftVideoQualityDetails_h
#define TAVScribeThriftVideoQualityDetails_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSNumber, NSObject;

@interface TAVScribeThriftVideoQualityDetails : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *bufferingDurationMillis;
@property (copy, nonatomic) NSNumber *sampledBitrate;
@property (copy, nonatomic) NSNumber *dataUsageBytes;

/* instance methods */
- (id)initWithBufferingDurationMillis:(id)millis sampledBitrate:(id)bitrate dataUsageBytes:(id)bytes;
- (id)copyWithZone:(struct _NSZone *)zone;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)marshallerDictionary;

@end

#endif /* TAVScribeThriftVideoQualityDetails_h */
