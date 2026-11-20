//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot22GrokBotQuoteBubbleView_h
#define _TtC11ChatGrokBot22GrokBotQuoteBubbleView_h
@import Foundation;

@class Swift.Bool, UIView, _$sSS, _$sSo7UIColorCSg, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotQuoteBubbleView : UIView { // (Swift)
    /* instance variables */
    __C.UIColor? userBubbleColor;
    __C.UILabel textLabel;
    Swift.Bool hasFileIcon;
    Swift.Bool isReplyToUser;
    Swift.String text;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot22GrokBotQuoteBubbleView_h */
