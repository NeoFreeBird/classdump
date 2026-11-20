//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TFNAnimationState_h
#define _TFNAnimationState_h
@import Foundation;

@class NSObject, UIButton;

@interface _TFNAnimationState : NSObject

@property (weak, nonatomic) UIButton *button;
@property (copy, nonatomic) id /* block */ completionBlock;

/* instance methods */

@end

#endif /* _TFNAnimationState_h */
