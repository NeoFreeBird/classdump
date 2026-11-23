//
#ifndef TAVAccessLogEvent_h
#define TAVAccessLogEvent_h
@import Foundation;

#include "NSCopying-Protocol.h"

@class NSObject, NSString;

@interface TAVAccessLogEvent : NSObject <NSCopying>

@property (readonly, nonatomic) double indicatedBitrate;
@property (readonly, nonatomic) double observedBitrate;
@property (readonly, nonatomic) double switchBitrate;
@property (readonly, nonatomic) double transferDuration;
@property (readonly, nonatomic) long long numberOfBytesTransferred;
@property (readonly, nonatomic) double averageAudioBitrate;
@property (readonly, nonatomic) double averageVideoBitrate;
@property (readonly, nonatomic) long long mediaRequestsWWAN;
@property (readonly, nonatomic) long long numberOfMediaRequests;
@property (readonly, nonatomic) long long numberOfDroppedVideoFrames;
@property (readonly, nonatomic) long long numberOfStalls;
@property (readonly, copy, nonatomic) NSString *playbackType;
@property (readonly, copy, nonatomic) NSString *URI;

/* class methods */
+ (id)eventsWithAVPlayerItemAccessLogEvents:(id)events;

/* instance methods */
- (id)init;
- (id)initWithIndicatedBitrate:(double)bitrate observedBitrate:(double)bitrate switchBitrate:(double)bitrate transferDuration:(double)duration numberOfBytesTransferred:(long long)transferred averageAudioBitrate:(double)bitrate averageVideoBitrate:(double)bitrate mediaRequestsWWAN:(long long)wwan numberOfMediaRequests:(long long)requests numberOfDroppedVideoFrames:(long long)frames numberOfStalls:(long long)stalls playbackType:(id)type URI:(id)uri;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)description;
- (id)initWithAVPlayerItemAccessLogEvent:(id)event;

@end

#endif /* TAVAccessLogEvent_h */
