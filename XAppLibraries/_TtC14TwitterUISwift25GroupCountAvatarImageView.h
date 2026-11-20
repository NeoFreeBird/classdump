//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14TwitterUISwift25GroupCountAvatarImageView_h
#define _TtC14TwitterUISwift25GroupCountAvatarImageView_h
@import Foundation;

#include "TFNLayoutMetricsEnvironment-Protocol.h"
#include "TFNTappableView-Protocol.h"

@class Swift.Bool, TFNLongPressGestureRecognizer, TFNTapGestureRecognizer, TFNTouchDownGestureRecognizer, TwitterUISwift.AvatarImageView, TwitterUISwift.GroupCountAvatarImageView.GroupCountState, TwitterUISwift.GroupCountAvatarImageView.GroupCountView ?, UIView, _$sSo21TFNTappableViewHelperCSg, __C.UIEdgeInsets;

@interface TwitterUISwift.GroupCountAvatarImageView : UIView <TFNTappableView, TFNLayoutMetricsEnvironment> { // (Swift)
    /* instance variables */
    __C.TFNTappableViewHelper? $__lazy_storage_$_tappableHelper;
    TwitterUISwift.GroupCountAvatarImageView.GroupCountView ? groupCountView;
    TwitterUISwift.GroupCountAvatarImageView.GroupCountState groupCountState;
    TwitterUISwift.AvatarImageView avatarView;
    Swift.Bool isPressed;
}

@property (nonatomic, copy) id /* block */ tapActionBlock;
@property (nonatomic, readonly) TFNTapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, readonly) TFNTapGestureRecognizer *doubleTapGestureRecognizer;
@property (nonatomic, readonly) TFNLongPressGestureRecognizer *longPressGestureRecognizer;
@property (nonatomic, readonly) TFNTouchDownGestureRecognizer *touchDownGestureRecognizer;
@property (nonatomic) _Bool isAccessibilityElement;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } touchInsets;
@property (nonatomic) _Bool pressed;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (void)setTapTarget:(id)target action:(SEL)action;
- (void)performTapAction;
- (void)setDoubleTapTarget:(id)target action:(SEL)action;
- (void)performDoubleTapAction;
- (void)setLongPressTarget:(id)target action:(SEL)action;
- (void)performLongPressAction;
- (void)setPressedStateDidChangeTarget:(id)target action:(SEL)action;
- (_Bool)isPressed;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)layoutMetricsDidChange:(id)change to:(id)to;

@end

#endif /* _TtC14TwitterUISwift25GroupCountAvatarImageView_h */
