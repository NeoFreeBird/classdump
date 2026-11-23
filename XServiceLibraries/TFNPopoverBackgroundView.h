//
#ifndef TFNPopoverBackgroundView_h
#define TFNPopoverBackgroundView_h
@import Foundation;

#include "TFNPopoverBackgroundArrowView.h"
#include "TFNPopoverSourceSpecification-Protocol.h"

@class NSString, UIBarButtonItem, UIColor, UIView;

@interface TFNPopoverBackgroundView : UIView <TFNPopoverSourceSpecification> {
    /* instance variables */
    TFNPopoverBackgroundArrowView *_arrowView;
}

@property (nonatomic) struct CGPoint { double x0; double x1; } popoverSourceOriginOffset;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long arrowDirection;
@property (nonatomic) struct CGSize { double x0; double x1; } arrowSize;
@property (nonatomic) double arrowOffset;
@property (retain, nonatomic) UIColor *arrowColor;
@property (nonatomic) unsigned long long permittedArrowDirections;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } boundingViewEdgeInsets;
@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) _Bool allowCenteredPresentationWithoutSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)pointToSource;
- (void)getPointToSourceFrame:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)frame arrowDirection:(out unsigned long long *)direction arrowOffset:(out double *)offset forPopoverSize:(struct CGSize { double x0; double x1; })size inBoundingView:(id)view withKeyboardHeight:(double)height;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsWithSystemSafeAreaForBoundingView:(id)view aboveKeyboard:(_Bool)keyboard;
- (id)_arrowDirectionCandidatesForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSize:(struct CGSize { double x0; double x1; })size fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect inBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds withEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets arrowDirection:(unsigned long long)direction getArrowPoint:(out struct CGPoint { double x0; double x1; } *)point arrowOffset:(out double *)offset;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSize:(struct CGSize { double x0; double x1; })size arrowDirection:(unsigned long long)direction arrowPoint:(struct CGPoint { double x0; double x1; })point arrowOffset:(double)offset;
- (void)setBackgroundColor:(id)color;
- (void)layoutSubviews;
- (void)_positionArrowView;
- (_Bool)tfn_isInPopover;

@end

#endif /* TFNPopoverBackgroundView_h */
