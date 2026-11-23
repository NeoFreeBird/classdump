//
#ifndef TCRVoicePlaybackAnimationSettings_h
#define TCRVoicePlaybackAnimationSettings_h
@import Foundation;

@class NSObject;

@interface TCRVoicePlaybackAnimationSettings : NSObject

/* class methods */
+ (double)expandAnimationDuration;
+ (double)shrinkAnimationDuration;
+ (unsigned long long)circleCount;
+ (double)circleOpacityFactor;
+ (double)circlePositionOffset;
+ (double)circleMinimumScale;
+ (double)circleMaximumScale;
+ (double)circleScaleRandomProportion;
+ (double)circleRandomNoise;

@end

#endif /* TCRVoicePlaybackAnimationSettings_h */
