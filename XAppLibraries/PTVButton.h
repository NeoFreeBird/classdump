//
#ifndef PTVButton_h
#define PTVButton_h
@import Foundation;

#include "PTVExtendedButton.h"

@class NSLayoutConstraint, NSMutableDictionary, UIImage, UIImageView;

@interface PTVButton : PTVExtendedButton {
    /* instance variables */
    UIImageView *_trailingImageView;
    NSMutableDictionary *_trailingImagesByState;
    unsigned long long _previousState;
}

@property (readonly, nonatomic) NSLayoutConstraint *minimumWidthConstraint;
@property (readonly, nonatomic) UIImage *currentTrailingImage;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } trailingImageEdgeInsets;
@property (nonatomic) double minimumWidth;

/* class methods */
+ (id)ptv_chatBarButton;
+ (id)ptv_chatBarButtonWithVectorImageNamed:(id)named;
+ (id)ptv_chatBarButtonWithImage:(id)image;
+ (id)ptv_chatBarButtonWithImage:(id)image highlightedImage:(id)image;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxTitleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })shiftOriginOfRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect toAccountForTrailingImage:(id)image;
- (void)setEnabled:(_Bool)enabled;
- (void)setSelected:(_Bool)selected;
- (void)setHighlighted:(_Bool)highlighted;
- (void)touchesBegan:(id)began withEvent:(id)event;
- (void)touchesMoved:(id)moved withEvent:(id)event;
- (void)touchesEnded:(id)ended withEvent:(id)event;
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;
- (void)detectWhetherStateChanged;
- (void)ptv_controlStateDidChange;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })trailingImageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)trailingImageForState:(unsigned long long)state;
- (void)setTrailingImage:(id)image forState:(unsigned long long)state;
- (void)updateTrailingImageView;

@end

#endif /* PTVButton_h */
