//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot22GrokBotXFollowedByView_h
#define _TtC11ChatGrokBot22GrokBotXFollowedByView_h
@import Foundation;

@class UIView, _$sSa -> ChatGrokBot.GrokBotXAvatarView, _$sSo7UILabelC, __C.CGSize;

@interface ChatGrokBot.GrokBotXFollowedByView : UIView { // (Swift)
    /* instance variables */
    __C.CGSize avatarSize;
    Swift.Array -> ChatGrokBot.GrokBotXAvatarView avatarViews;
    __C.UILabel label;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot22GrokBotXFollowedByView_h */
