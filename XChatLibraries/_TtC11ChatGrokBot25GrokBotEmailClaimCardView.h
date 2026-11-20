//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11ChatGrokBot25GrokBotEmailClaimCardView_h
#define _TtC11ChatGrokBot25GrokBotEmailClaimCardView_h
@import Foundation;

@class ChatGrokBot.GrokBotCardButton, ChatGrokBot.GrokBotCardReceiptLineView, UIView, _$s13XDesignSystem10LinkedTextCMn, _$sSo11UIImageViewC, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotEmailClaimCardView : UIView { // (Swift)
    /* instance variables */
    nominal type descriptor for XDesignSystem.LinkedText addressView;
    ChatGrokBot.GrokBotCardButton allowButton;
    __C.UIImageView cautionIconView;
    __C.UILabel cautionLabel;
    ChatGrokBot.GrokBotCardButton denyButton;
    ChatGrokBot.GrokBotCardReceiptLineView receiptLineView;
    __C.UILabel titleLabel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot25GrokBotEmailClaimCardView_h */
