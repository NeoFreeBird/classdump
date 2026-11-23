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
