//
#ifndef PTVVideoOverlayView_h
#define PTVVideoOverlayView_h
@import Foundation;

#include "PTVVideoOverlayBackgroundView.h"

@class NSLayoutConstraint, NSLayoutDimension, UIView;

@interface PTVVideoOverlayView : UIView {
    /* instance variables */
    NSLayoutConstraint *_contentViewBottomConstraint;
}

@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) PTVVideoOverlayBackgroundView *backgroundView;
@property (nonatomic) double keyboardHeight;
@property (readonly, nonatomic) NSLayoutDimension *shadeHeightAnchor;
@property (readonly, nonatomic) NSLayoutDimension *contentHeightAnchor;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)updateConstraints;
- (void)addOverlayView:(id)view;
- (void)addContentView:(id)view;
- (void)addUnderlayView:(id)view;
- (void)setContentVisible:(_Bool)visible animated:(_Bool)animated animations:(id /* block */)animations completion:(id /* block */)completion;

@end

#endif /* PTVVideoOverlayView_h */
