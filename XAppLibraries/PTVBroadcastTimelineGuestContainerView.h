//
#ifndef PTVBroadcastTimelineGuestContainerView_h
#define PTVBroadcastTimelineGuestContainerView_h
@import Foundation;

#include "PTVGuestView.h"

@class UIView;

@interface PTVBroadcastTimelineGuestContainerView : UIView

@property (retain, nonatomic) PTVGuestView *guestView;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)setCornerRadius:(double)radius;
- (void)setShadowOpacity:(double)opacity;
- (void)setBackgroundColor:(id)color;

@end

#endif /* PTVBroadcastTimelineGuestContainerView_h */
