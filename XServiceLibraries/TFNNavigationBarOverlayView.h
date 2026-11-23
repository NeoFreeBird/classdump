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
