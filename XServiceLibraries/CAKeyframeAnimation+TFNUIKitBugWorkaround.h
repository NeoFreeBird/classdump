//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef CAKeyframeAnimation_TFNUIKitBugWorkaround_h
#define CAKeyframeAnimation_TFNUIKitBugWorkaround_h
@import Foundation;

@interface CAKeyframeAnimation (TFNUIKitBugWorkaround)

/* instance methods */
- (id)fromValue;
- (void)setFromValue:(id)value;

@end

#endif /* CAKeyframeAnimation_TFNUIKitBugWorkaround_h */
