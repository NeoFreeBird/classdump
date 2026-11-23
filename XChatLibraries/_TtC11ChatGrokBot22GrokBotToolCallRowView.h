//
#ifndef _TtC11ChatGrokBot22GrokBotToolCallRowView_h
#define _TtC11ChatGrokBot22GrokBotToolCallRowView_h
@import Foundation;

@class ChatGrokBot.GrokBotActivityIndicatorView, UIView, _$sSo11UIImageViewC, _$sSo7UILabelC, _$syycSg;

@interface ChatGrokBot.GrokBotToolCallRowView : UIView { // (Swift)
    /* instance variables */
    (() -> ())? onLongPress;
    ChatGrokBot.GrokBotActivityIndicatorView activityIndicatorView;
    __C.UIImageView iconView;
    __C.UILabel nameLabel;
    __C.UILabel summaryLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot22GrokBotToolCallRowView_h */
