//
#ifndef _TtC6CallUI14CallAvatarView_h
#define _TtC6CallUI14CallAvatarView_h
@import Foundation;

@class CallModels.CallImageLoading ?, CallUI.CallAvatarView.PlaceholderStyle, Swift.Bool, UIView, _$s10Foundation3URLVMn ?, _$s7Combine11CancellableMp ?, _$sSo11UIImageViewC, _$sSo15CAGradientLayerC, _$sSo6UIViewCSg, _$sSo7UILabelC;

@interface CallUI.CallAvatarView : UIView { // (Swift)
    /* instance variables */
    CallUI.CallAvatarView.PlaceholderStyle placeholderStyle;
    __C.CAGradientLayer gradientLayer;
    __C.UILabel initialsLabel;
    __C.UIImageView imageView;
    CallModels.CallImageLoading ? imageLoader;
    protocol descriptor for Combine.Cancellable ? imageLoadCancellable;
    nominal type descriptor for Foundation.URL ? avatarURL;
    nominal type descriptor for Foundation.URL ? loadedURL;
    __C.UIView? customView;
    Swift.Bool isSpeaking;
    Swift.Bool isFading;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)traitCollectionDidChange:(id)change;
- (void)updateFade;

@end

#endif /* _TtC6CallUI14CallAvatarView_h */
