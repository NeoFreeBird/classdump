//
#ifndef TFSTwitterVoiceInfo_h
#define TFSTwitterVoiceInfo_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"

@class NSArray, NSNumber, NSObject, NSString;

@interface TFSTwitterVoiceInfo : NSObject <NSCoding, NSCopying> // (Swift)

@property (nonatomic, readonly) NSString *audioSpaceId;
@property (nonatomic, readonly) NSString *audioSpaceTitle;
@property (nonatomic, readonly) NSNumber *clipIndex;
@property (nonatomic, readonly) NSNumber *numberOfClips;
@property (nonatomic, readonly) NSNumber *totalDurationMillis;
@property (nonatomic, readonly) NSArray *audiowaveValues;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

/* instance methods */
- (id)initWithClipIndex:(id)index numberOfClips:(id)clips totalDurationMillis:(id)millis audiowaveValues:(id)values audioSpaceId:(id)id audioSpaceTitle:(id)title;
- (void)encodeWithCoder:(id)coder;
- (id)initWithCoder:(id)coder;
- (id)copyWithZone:(void *)zone;
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterVoiceInfo_h */
