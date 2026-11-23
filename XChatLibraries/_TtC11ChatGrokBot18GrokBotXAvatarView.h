//
#ifndef _TtC11ChatGrokBot18GrokBotXAvatarView_h
#define _TtC11ChatGrokBot18GrokBotXAvatarView_h
@import Foundation;

@class ChatModels.ChatAvatarShape, ChatUI.ChatRemoteImageView, UIView, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotXAvatarView : UIView { // (Swift)
    /* instance variables */
    ChatUI.ChatRemoteImageView imageView;
    __C.UILabel initialLabel;
    ChatModels.ChatAvatarShape shape;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC11ChatGrokBot18GrokBotXAvatarView_h */
