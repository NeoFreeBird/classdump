//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIControl_TFNAdditions_h
#define UIControl_TFNAdditions_h
@import Foundation;

@interface UIControl (TFNAdditions)

/* instance methods */
- (void)tfn_sendActionsForControlEventTouchUpInside;

@end

#endif /* UIControl_TFNAdditions_h */
