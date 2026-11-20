//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNWindowRootView_h
#define TFNWindowRootView_h
@import Foundation;

@class UIView;

@interface TFNWindowRootView : UIView

/* instance methods */
- (void)willMoveToWindow:(id)window;

@end

#endif /* TFNWindowRootView_h */
