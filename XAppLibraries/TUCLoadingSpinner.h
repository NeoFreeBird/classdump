//
#ifndef TUCLoadingSpinner_h
#define TUCLoadingSpinner_h
@import Foundation;

@class UIView;

@interface TUCLoadingSpinner : UIView { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 isFirstCycle;
    @40@0:8:16@24@32 animationStarted;
    @40@0:8:16@24@32 configuration;
    @40@0:8:16@24@32 backgroundRailLayer;
    @40@0:8:16@24@32 foregroundRailLayer;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)layoutSublayersOfLayer:(id)layer;
- (void)willEnterForegroundNotification;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* TUCLoadingSpinner_h */
