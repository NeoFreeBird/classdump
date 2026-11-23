//
#ifndef T1AppSplitOverlayView_h
#define T1AppSplitOverlayView_h
@import Foundation;

@class UIView;

@interface T1AppSplitOverlayView : UIView {
    /* instance variables */
    UIView *_hostedView;
}

/* instance methods */
- (id)initWithHostedView:(id)view;
- (void)setAlpha:(double)alpha;

@end

#endif /* T1AppSplitOverlayView_h */
