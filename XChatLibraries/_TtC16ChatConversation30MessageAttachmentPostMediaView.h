//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation30MessageAttachmentPostMediaView_h
#define _TtC16ChatConversation30MessageAttachmentPostMediaView_h
@import Foundation;

#include "TAVUIAutoplayable-Protocol.h"

@class ChatConversation.MessageInlineVideoView, ChatConversation.PostMediaAttributionPillView, ChatModels.PostPreviewMediaType ?, ChatUI.AttachmentBorderView, ChatUI.ChatRemoteImageView, ChatUI.PlayIconView, Swift.Bool, UIView, XVideo.PostVideo ?, XVideo.PostVideoProviding ?, _$s12CoreGraphics7CGFloatVMn ?, _$sSSSg, _$sSi, _$sSo6UIViewC, _$sSo7UILabelC, __C.Name ?, __C.UIRectCorner, __C.UIRectEdge;

@interface ChatConversation.MessageAttachmentPostMediaView : UIView <TAVUIAutoplayable> { // (Swift)
    /* instance variables */
    ChatUI.ChatRemoteImageView imageView;
    ChatConversation.MessageInlineVideoView inlineVideoView;
    ChatUI.PlayIconView playIconView;
    ChatUI.AttachmentBorderView borderView;
    ChatConversation.PostMediaAttributionPillView attributionPillView;
    __C.UIView overflowOverlayView;
    __C.UILabel overflowLabel;
    XVideo.PostVideoProviding ? postVideoProvider;
    XVideo.PostVideoProviding ? postClipProvider;
    Swift.Bool hidesPlayButton;
    ChatModels.PostPreviewMediaType ? mediaType;
    XVideo.PostVideo ? postVideo;
    Swift.Bool isVideoDocked;
    __C.Name ? observedDockedVideoNotification;
    Swift.String? attributionSourcePostID;
    Swift.Int immersiveMediaIndex;
    __C.UIRectCorner roundedCorners;
    nominal type descriptor for CoreGraphics.CGFloat ? mediaAspectRatio;
    __C.UIRectEdge borderedEdges;
    __C.UIRectEdge externalBorderedEdges;
}

@property (nonatomic, readonly) UIView *autoplayableView;
@property (nonatomic, readonly) long long autoplayableType;

/* instance methods */
- (void)didBecomeActiveAutoplayableWithManager:(id)manager;
- (void)willResignAsActiveAutoplayableWithManager:(id)manager;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)dockedVideoDidChange;

@end

#endif /* _TtC16ChatConversation30MessageAttachmentPostMediaView_h */
