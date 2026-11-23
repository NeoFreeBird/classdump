//
#ifndef _TtC11ChatGrokBot36GrokBotAvatarTitleButtonSubtitleView_h
#define _TtC11ChatGrokBot36GrokBotAvatarTitleButtonSubtitleView_h
@import Foundation;

@class NSString, UIView, _$sSo11UIImageViewC, _$sSo11UIStackViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotAvatarTitleButtonSubtitleView : UIView { // (Swift)
    /* instance variables */
    __C.UIImageView leadingImageView;
    __C.UIStackView stackView;
    __C.UILabel subtitleLabel;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSString *accessibilityLabel;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11ChatGrokBot36GrokBotAvatarTitleButtonSubtitleView_h */
