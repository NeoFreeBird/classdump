//
#ifndef _TtC19ChatMessageComposer39MessageRateLimitUpsellRecipientHeroView_h
#define _TtC19ChatMessageComposer39MessageRateLimitUpsellRecipientHeroView_h
@import Foundation;

@class UIView, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatMessageComposer.MessageRateLimitUpsellRecipientHeroView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView avatarImageView;
    __C.UILabel nameLabel;
    __C.UILabel handleLabel;
    __C.UIImageView verifiedBadgeImageView;
    __C.UIView sendButton;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19ChatMessageComposer39MessageRateLimitUpsellRecipientHeroView_h */
