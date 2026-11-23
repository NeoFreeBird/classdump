//
#ifndef XDSToastContainerView_h
#define XDSToastContainerView_h
@import Foundation;

@class UIColor, UIView;

@interface XDSToastContainerView : UIView { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 glassView;
}

@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, retain) UIColor *surfaceColor;
@property (nonatomic) _Bool ownsPress;

/* instance methods */
- (id)init;
- (id)initWithCoder:(id)coder;
- (void)cancelSystemPress;
- (struct CGSize { double x0; double x1; })systemLayoutSizeFittingSize:(struct CGSize { double x0; double x1; })size withHorizontalFittingPriority:(float)priority verticalFittingPriority:(float)priority;
- (void)applyGlass;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* XDSToastContainerView_h */
