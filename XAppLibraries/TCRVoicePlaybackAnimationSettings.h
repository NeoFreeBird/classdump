//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
