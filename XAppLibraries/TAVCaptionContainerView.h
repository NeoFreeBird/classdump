//
#ifndef TAVCaptionContainerView_h
#define TAVCaptionContainerView_h
@import Foundation;

#include "TAVCaptionSink-Protocol.h"

@class NSLayoutConstraint, NSMutableSet, UILayoutGuide, UIView;

@interface TAVCaptionContainerView : UIView <TAVCaptionSink> {
    /* instance variables */
    NSLayoutConstraint *_layoutGuideLeadingConstraint;
    NSLayoutConstraint *_layoutGuideTopConstraint;
    NSLayoutConstraint *_layoutGuideWidthConstraint;
    NSLayoutConstraint *_layoutGuideHeightConstraint;
}

@property (retain, nonatomic) NSMutableSet *availableCaptionViews;
@property (retain, nonatomic) NSMutableSet *usedCaptionViews;
@property (nonatomic) double lastLayoutHeight;
@property (retain, nonatomic) UILayoutGuide *layoutGuide;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) _Bool useSingleBackgroundForCaptions;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } captionInsets;
@property (nonatomic) _Bool resetsRecycledCaptionConstraints;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleCaptionFrame;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)setUp;
- (void)setUpLayoutGuide;
- (void)hideAllCaptionViews;
- (void)addCaptionView:(id)view;
- (id)captionViewConstraintsForCaptionModel:(id)model withCaptionView:(id)view atIndex:(unsigned long long)index;
- (void)applyCaptionModel:(id)model toCaptionView:(id)view atIndex:(unsigned long long)index;
- (void)applyCaptionModel:(id)model toCaptionView:(id)view;
- (void)captionSourceDidUpdateWithCaptionModels:(id)models;

@end

#endif /* TAVCaptionContainerView_h */
