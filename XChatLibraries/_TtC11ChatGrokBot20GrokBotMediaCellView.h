//
#ifndef _TtC11ChatGrokBot20GrokBotMediaCellView_h
#define _TtC11ChatGrokBot20GrokBotMediaCellView_h
@import Foundation;

@class ChatGrokBot.GrokBotMessageViewModel.Attachment ?, ChatUI.AttachmentBorderView, ChatUI.AttachmentLoadingIndicatorView, ChatUI.MessageAttachmentErrorView, ChatUI.PlayIconView, Swift.Bool, UIView, _$s4XGif26DisplayLinkAnimatedGifViewCMn, _$sScTyyt _$ss5NeverOMn ?, _$sSo11UIImageViewC, _$sSo7UIImageCSg, _$sSo7UIImageCSgSS_ __C.CGSize _$stYacSg, __C.CGSize;

@interface ChatGrokBot.GrokBotMediaCellView : UIView { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotMessageViewModel.Attachment ? attachment;
    __C.UIImage? displayedImage;
    Swift.Bool hasLoadFailed;
    ChatUI.AttachmentBorderView borderView;
    ChatUI.MessageAttachmentErrorView errorView;
    nominal type descriptor for XGif.DisplayLinkAnimatedGifView gifView;
    __C.UIImageView imageView;
    ChatUI.AttachmentLoadingIndicatorView loadingIndicator;
    ChatUI.PlayIconView playIconView;
    __C.UIImage?Swift.String first-element-marker  __C.CGSize _$stYacSg load;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? loadTask;
    __C.CGSize targetSize;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC11ChatGrokBot20GrokBotMediaCellView_h */
