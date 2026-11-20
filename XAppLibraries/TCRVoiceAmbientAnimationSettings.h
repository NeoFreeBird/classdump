//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRVoiceAmbientAnimationSettings_h
#define TCRVoiceAmbientAnimationSettings_h
@import Foundation;

@class NSObject;

@interface TCRVoiceAmbientAnimationSettings : NSObject

/* class methods */
+ (double)circleOpacity;
+ (unsigned long long)repeatCount;
+ (unsigned long long)ambientAnimationType;

@end

#endif /* TCRVoiceAmbientAnimationSettings_h */
