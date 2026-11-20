//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNDashDisabledTransitionView_h
#define TFNDashDisabledTransitionView_h
@import Foundation;

@class UIView;

@interface TFNDashDisabledTransitionView : UIView

/* instance methods */
- (_Bool)tfn_isAppGestureEnabled:(unsigned long long)enabled;

@end

#endif /* TFNDashDisabledTransitionView_h */
