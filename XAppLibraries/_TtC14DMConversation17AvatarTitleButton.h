//
#ifndef _TtC14DMConversation17AvatarTitleButton_h
#define _TtC14DMConversation17AvatarTitleButton_h
@import Foundation;

@class DMConversation.AvatarTitleButtonSubtitleView, DMUI.HorizontalFacepileView, DMUI.TitleWithImageView, NSString, UIControl, _$sSo11UIStackViewC;

@interface DMConversation.AvatarTitleButton : UIControl { // (Swift)
    /* instance variables */
    DMConversation.AvatarTitleButtonSubtitleView subtitleView;
    __C.UIStackView textStackView;
    DMUI.HorizontalFacepileView avatarFacepileView;
    DMUI.TitleWithImageView userTitleBadgeView;
}

@property (nonatomic) _Bool highlighted;
@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } accessibilityFrame;

/* instance methods */
- (_Bool)isHighlighted;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC14DMConversation17AvatarTitleButton_h */
