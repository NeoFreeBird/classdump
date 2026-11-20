//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNTwitterMediaUploadUpsellFatigueTracker_h
#define TFNTwitterMediaUploadUpsellFatigueTracker_h
@import Foundation;

@class NSObject;

@interface TFNTwitterMediaUploadUpsellFatigueTracker : NSObject // (Swift)

/* class methods */
+ (_Bool)shouldHideWithTimeout:(double)timeout;
+ (void)resetTimestamp;

/* instance methods */
- (id)init;

@end

#endif /* TFNTwitterMediaUploadUpsellFatigueTracker_h */
