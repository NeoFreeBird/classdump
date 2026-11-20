//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot28GrokBotTemplateShareCardView_h
#define _TtC11ChatGrokBot28GrokBotTemplateShareCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotHostingView, UIView, _$s8Dispatch0A8WorkItemCMn ?, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotTemplateShareCardView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCardButton overflowButton;
    ChatGrokBot.GrokBotCardButton primaryButton;
    __C.UILabel descriptionLabel;
    ChatGrokBot.GrokBotHostingView markHostView;
    __C.UILabel nameLabel;
    __C.UILabel noticeLabel;
    __C.UILabel statusLabel;
    nominal type descriptor for Dispatch.DispatchWorkItem ? copiedResetWorkItem;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;

@end

#endif /* _TtC11ChatGrokBot28GrokBotTemplateShareCardView_h */
