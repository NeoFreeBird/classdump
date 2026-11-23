//
#ifndef _TtC11TwitterDash26TabRootAvatarBarButtonItem_h
#define _TtC11TwitterDash26TabRootAvatarBarButtonItem_h
@import Foundation;

@class NSString, TwitterDash.TabRootAvatarContainerView, UIBarButtonItem, _$s7Combine14AnyCancellableCMn ?, _$sSSSg, _$sSo28UILongPressGestureRecognizerC, _$sySo6UIViewCcSg, _$syycSg;

@interface TwitterDash.TabRootAvatarBarButtonItem : UIBarButtonItem { // (Swift)
    /* instance variables */
    (() -> ())? onTap;
    ((__C.UIView) -> ())? onLongPress;
    Swift.String? longPressAccessibilityActionName;
    TwitterDash.TabRootAvatarContainerView containerView;
    __C.UILongPressGestureRecognizer longPressRecognizer;
    nominal type descriptor for Combine.AnyCancellable ? badgeCancellable;
}

@property (nonatomic, copy) NSString *accessibilityValue;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)didTapAvatar;
- (void)didLongPressAvatar:(id)avatar;
- (void)didSecondaryClickAvatar;
- (void)updateLongPressDuration;
- (id)init;

@end

#endif /* _TtC11TwitterDash26TabRootAvatarBarButtonItem_h */
