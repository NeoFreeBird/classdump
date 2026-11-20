//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation16MessageQuoteView_h
#define _TtC16ChatConversation16MessageQuoteView_h
@import Foundation;

@class ChatConversation.MessageQuoteBodyView, ChatConversation.MessageQuoteHeaderView, ChatConversation.MessageQuotePostPreviewView, ChatConversation.MessageQuoteView.Configuration ?, ChatConversation.MessageQuoteViewDelegate ?, ChatConversation.MessageTextView, ChatUI.ChatColorProviding ?, ChatUI.ChatRemoteImageView, ChatUI.PlayIconView, ChatUtilities.VideoImageLoader, Swift.Bool, UIView, _$s10Foundation3URLVMn ?, _$s7Combine11CancellableMp ?, _$sSo12UIScrollViewCSgXw;

@interface ChatConversation.MessageQuoteView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.MessageQuoteBodyView bodyContainerView;
    ChatConversation.MessageQuoteHeaderView headerView;
    ChatUI.PlayIconView mediaPlayIconView;
    ChatUI.ChatRemoteImageView mediaThumbnailView;
    ChatConversation.MessageQuotePostPreviewView postPreviewView;
    ChatConversation.MessageTextView textView;
    ChatConversation.MessageQuoteViewDelegate ? delegate;
    weak __C.UIScrollView? scrollView;
    ChatUI.ChatColorProviding ? colorProvider;
    Swift.Bool isFromCurrentUser;
    ChatConversation.MessageQuoteView.Configuration ? configuration;
    Swift.Bool isLoadingVideoThumbnail;
    ChatUtilities.VideoImageLoader videoImageLoader;
    protocol descriptor for Combine.Cancellable ? videoThumbnailCancellable;
    nominal type descriptor for Foundation.URL ? videoThumbnailURL;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC16ChatConversation16MessageQuoteView_h */
