//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNNavigationBarOverlayView_h
#define TFNNavigationBarOverlayView_h
@import Foundation;

#include "TFNNavigationViewHiding-Protocol.h"

@class UIView;

@interface TFNNavigationBarOverlayView : UIView <TFNNavigationViewHiding>

/* instance methods */
- (void)setAlpha:(double)alpha;
- (void)tfn_setAlpha:(double)alpha;

@end

#endif /* TFNNavigationBarOverlayView_h */
