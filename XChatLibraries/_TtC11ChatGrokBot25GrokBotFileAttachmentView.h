//
#ifndef _TtC11ChatGrokBot25GrokBotFileAttachmentView_h
#define _TtC11ChatGrokBot25GrokBotFileAttachmentView_h
@import Foundation;

@class ChatGrokBot.GrokBotPagePreviewView, Swift.Bool, UIControl, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UIColorC, _$sSo7UILabelC, _$sySo6UIViewCcSg;

@interface ChatGrokBot.GrokBotFileAttachmentView : UIControl { // (Swift)
    /* instance variables */
    __C.UIColor fillColor;
    ((__C.UIView) -> ())? onTap;
    Swift.Bool ownsHorizontalPans;
    __C.UIView containerView;
    __C.UILabel extensionLabel;
    __C.UIImageView iconView;
    __C.UILabel nameLabel;
    __C.UIView previewSeparatorView;
    ChatGrokBot.GrokBotPagePreviewView previewView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot25GrokBotFileAttachmentView_h */
