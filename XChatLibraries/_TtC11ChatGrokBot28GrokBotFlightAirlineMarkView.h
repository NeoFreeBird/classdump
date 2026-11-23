//
#ifndef _TtC11ChatGrokBot28GrokBotFlightAirlineMarkView_h
#define _TtC11ChatGrokBot28GrokBotFlightAirlineMarkView_h
@import Foundation;

@class ChatUI.ChatRemoteImageView, UIView, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotFlightAirlineMarkView : UIView { // (Swift)
    /* instance variables */
    __C.UILabel codeLabel;
    ChatUI.ChatRemoteImageView faviconView;
    __C.UIImageView logoView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC11ChatGrokBot28GrokBotFlightAirlineMarkView_h */
