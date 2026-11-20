//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot24GrokBotFlightResultsView_h
#define _TtC11ChatGrokBot24GrokBotFlightResultsView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, UIView, _$sSa -> ChatGrokBot.GrokBotFlightResultRowView, _$sSaySo6UIViewCG, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotFlightResultsView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton actionButton;
    __C.UILabel metaLabel;
    __C.UILabel titleLabel;
    [__C.UIView] dividerViews;
    Swift.Array -> ChatGrokBot.GrokBotFlightResultRowView rowViews;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot24GrokBotFlightResultsView_h */
