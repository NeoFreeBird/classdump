//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC21TwitterUnifiedCardsUI16WebAdOverlayView_h
#define _TtC21TwitterUnifiedCardsUI16WebAdOverlayView_h
@import Foundation;

#include "TAFBottomOverlayContentViewable-Protocol.h"
#include "TAFBottomOverlayContentViewableDelegate-Protocol.h"

@class TwitterUnifiedCardsUI.BlurBackgroundImageComponentView ?, TwitterUnifiedCardsUI.WebAdOverlay, TwitterUnifiedCardsUI.WebAdOverlayView.LayoutState ?, UIView, _$sSo39TAFBottomOverlayContentViewableDelegate_pSgXw, _$sSo7UILabelCSg, _$sSo9TFNButtonCSg, __C.CGSize ?;

@interface TwitterUnifiedCardsUI.WebAdOverlayView : UIView <TAFBottomOverlayContentViewable> { // (Swift)
    /* instance variables */
    TwitterUnifiedCardsUI.WebAdOverlay overlay;
    TwitterUnifiedCardsUI.WebAdOverlayView.LayoutState ? layoutState;
    __C.CGSize ? $__lazy_storage_$_imageSize;
    TwitterUnifiedCardsUI.BlurBackgroundImageComponentView ? $__lazy_storage_$_imageView;
    __C.UILabel? $__lazy_storage_$_titleLabel;
    __C.UILabel? $__lazy_storage_$_subtitleLabel;
    __C.TFNButton? $__lazy_storage_$_button;
}

@property (nonatomic, weak) id <TAFBottomOverlayContentViewableDelegate> delegate;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

/* instance methods */
- (void)handleTap:(id)tap;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC21TwitterUnifiedCardsUI16WebAdOverlayView_h */
