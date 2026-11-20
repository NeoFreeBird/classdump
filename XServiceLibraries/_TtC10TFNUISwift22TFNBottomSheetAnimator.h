//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC10TFNUISwift22TFNBottomSheetAnimator_h
#define _TtC10TFNUISwift22TFNBottomSheetAnimator_h
@import Foundation;

#include "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSObject, Swift.Bool, TFNUISwift.TFNBottomSheetStyle.Config;

@interface TFNUISwift.TFNBottomSheetAnimator : NSObject <UIViewControllerAnimatedTransitioning> { // (Swift)
    /* instance variables */
    Swift.Bool isPresenting;
    TFNUISwift.TFNBottomSheetStyle.Config config;
}

/* instance methods */
- (double)transitionDuration:(id)duration;
- (void)animateTransition:(id)transition;
- (id)init;

@end

#endif /* _TtC10TFNUISwift22TFNBottomSheetAnimator_h */
