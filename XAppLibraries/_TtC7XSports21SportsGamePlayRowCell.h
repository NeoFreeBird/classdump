//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC7XSports21SportsGamePlayRowCell_h
#define _TtC7XSports21SportsGamePlayRowCell_h
@import Foundation;

#include "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, UICollectionViewCell, XSports.SportsGamePlayRow ?, XSports.SportsInlineVideoSession ?, XSports.SportsPlayPostActionsView, _$s12CoreGraphics7CGFloatVMn, _$sSSSg, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC, _$syycSg;

@interface XSports.SportsGamePlayRowCell : UICollectionViewCell <UIGestureRecognizerDelegate> { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    (() -> ())? onToggle;
    (() -> ())? onVideoTap;
    nominal type descriptor for CoreGraphics.CGFloat leadingInset;
    __C.UIImageView chevronImageView;
    __C.UILabel textLabel;
    __C.UILabel awayScoreLabel;
    __C.UILabel homeScoreLabel;
    __C.UIView dividerView;
    __C.UIView videoContainer;
    XSports.SportsPlayPostActionsView postActionsView;
    XSports.SportsGamePlayRow ? content;
    XSports.SportsInlineVideoSession ? videoSession;
    Swift.String? installedVideoStatusRestID;
}

@property (nonatomic, copy) NSArray *accessibilityCustomActions;

/* instance methods */
- (_Bool)gestureRecognizer:(id)recognizer shouldReceiveTouch:(id)touch;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)handleTap:(id)tap;

@end

#endif /* _TtC7XSports21SportsGamePlayRowCell_h */
