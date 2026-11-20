//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14CommunityNotes18BirdwatchPivotView_h
#define _TtC14CommunityNotes18BirdwatchPivotView_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"

@class CommunityNotes.BirdwatchPivotActionView, CommunityNotes.BirdwatchPivotTitleView, CommunityNotes.BirdwatchPivotViewDelegate ?, CommunityNotes.BirdwatchPivotViewModel ?, Swift.Bool, TweetDetails.GrokTranslateButtonView, UIView, _$s12CoreGraphics7CGFloatVMn, _$sSo12CAShapeLayerC, _$sSo17TFNSolidColorViewC, _$sSo21TFNAttributedTextViewC, _$sSo24TFNTappableHighlightViewC, _$sSo6UIViewC, __C.UIRectCorner;

@interface CommunityNotes.BirdwatchPivotView : UIView <TFNAttributedTextViewDelegate> { // (Swift)
    /* instance variables */
    CommunityNotes.BirdwatchPivotViewDelegate ? delegate;
    CommunityNotes.BirdwatchPivotViewModel ? viewModel;
    __C.TFNTappableHighlightView highlightView;
    CommunityNotes.BirdwatchPivotTitleView titleView;
    __C.TFNSolidColorView titleBackgroundView;
    __C.TFNSolidColorView titleSeparator;
    __C.TFNAttributedTextView subtitleTextView;
    __C.TFNAttributedTextView linkTextView;
    __C.TFNSolidColorView actionSeparator;
    __C.CAShapeLayer actionSeparatorLine;
    CommunityNotes.BirdwatchPivotActionView actionView;
    __C.TFNAttributedTextView footerTextView;
    TweetDetails.GrokTranslateButtonView translationButton;
    __C.CAShapeLayer borderLayer;
    __C.UIView contentContainerView;
    nominal type descriptor for CoreGraphics.CGFloat actionSeparatorInset;
    __C.UIRectCorner borderCornersToRound;
    Swift.Bool isFirstLayout;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })test withEvent:(id)event;
- (void)didSingleTap;

@end

#endif /* _TtC14CommunityNotes18BirdwatchPivotView_h */
