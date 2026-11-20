//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation26MessageAttachmentVideoView_h
#define _TtC16ChatConversation26MessageAttachmentVideoView_h
@import Foundation;

#include "TAVUIAutoplayable-Protocol.h"

@class ChatAttachmentViewer.AttachmentVideoPlayerProviding ?, ChatConversation.MediaAttachmentNeedsResolvingView, ChatConversation.MessageInlineVideoView, ChatModelsCore.AttachmentID ?, ChatUI.AttachmentBorderView, ChatUI.AttachmentLoadingIndicatorView, ChatUI.AttachmentMediaService ?, ChatUI.MessageAttachmentErrorView, ChatUI.PlayIconView, ChatUtilities.AttachmentMediaLoadCoordinator, Swift.Bool, UIView, _$s7Combine14AnyCancellableCMn ?, _$sSo11UIImageViewC;

@interface ChatConversation.MessageAttachmentVideoView : UIView <TAVUIAutoplayable> { // (Swift)
    /* instance variables */
    __C.UIImageView thumbnailImageView;
    ChatConversation.MessageInlineVideoView inlineVideoView;
    ChatUI.PlayIconView playIconView;
    ChatUI.AttachmentBorderView borderView;
    ChatUI.MessageAttachmentErrorView errorView;
    ChatConversation.MediaAttachmentNeedsResolvingView needsResolvingView;
    ChatUI.AttachmentLoadingIndicatorView loadingIndicator;
    Swift.Bool showsPlayIcon;
    Swift.Bool hidesPlayButton;
    ChatAttachmentViewer.AttachmentVideoPlayerProviding ? videoPlayerProvider;
    ChatUI.AttachmentMediaService ? attachmentMediaService;
    nominal type descriptor for Combine.AnyCancellable ? thumbnailRequest;
    ChatUtilities.AttachmentMediaLoadCoordinator mediaLoadCoordinator;
    ChatModelsCore.AttachmentID ? playableAttachmentID;
}

@property (nonatomic, readonly) UIView *autoplayableView;
@property (nonatomic, readonly) long long autoplayableType;

/* instance methods */
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)layoutSubviews;

@end

#endif /* _TtC16ChatConversation26MessageAttachmentVideoView_h */
