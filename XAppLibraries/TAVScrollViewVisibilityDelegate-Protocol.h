//
#ifndef TAVScrollViewVisibilityDelegate_Protocol_h
#define TAVScrollViewVisibilityDelegate_Protocol_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@protocol TAVScrollViewVisibilityDelegate <UIScrollViewDelegate>

@required

@optional

/* optional instance methods */
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tav_boundsForClippingDescendantsOfScrollView:(id)view;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tav_boundsForClippingDescendantsOfScrollView:(id)view;

@end

#endif /* TAVScrollViewVisibilityDelegate_Protocol_h */
