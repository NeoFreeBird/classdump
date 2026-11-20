//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNOverlayView_h
#define TFNOverlayView_h
@import Foundation;

@class UIView;

@interface TFNOverlayView : UIView

/* instance methods */
- (_Bool)tfn_isAppGestureEnabled:(unsigned long long)enabled;

@end

#endif /* TFNOverlayView_h */
