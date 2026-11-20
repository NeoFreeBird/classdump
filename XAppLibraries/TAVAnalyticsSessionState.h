//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAnalyticsSessionState_h
#define TAVAnalyticsSessionState_h
@import Foundation;

#include "NSCoding-Protocol.h"
#include "NSCopying-Protocol.h"
#include "TAVAnalyticsPresentationState-Protocol.h"
#include "TAVPlaybackState.h"
#include "TAVWallTime.h"

@class NSObject;

@interface TAVAnalyticsSessionState : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) TAVPlaybackState *playbackState;
@property (copy, nonatomic) id <TAVAnalyticsPresentationState> lastKnownPresentationState;
@property (readonly, nonatomic) TAVWallTime *playerPreparationStartWallTime;

/* instance methods */
- (id)initWithPlaybackState:(id)state lastKnownPresentationState:(id)state playerPreparationStartWallTime:(id)time;
- (id)description;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)deepCopy;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;

@end

#endif /* TAVAnalyticsSessionState_h */
