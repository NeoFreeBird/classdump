//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation26PinnedMessageThumbnailView_h
#define _TtC16ChatConversation26PinnedMessageThumbnailView_h
@import Foundation;

@class ChatConversation.PinnedMessageThumbnail ?, ChatConversation.PinnedMessageThumbnailView.State, ChatUI.ChatImageLoading, ChatUtilities.VideoImageLoader, UIView, _$s13XDesignSystem22ShimmerPlaceholderViewCMn, _$s4XGif14GifImageLoaderCMn, _$s4XGif26DisplayLinkAnimatedGifViewCMn ?, _$s7Combine11CancellableMp ?, _$sSo11UIImageViewC;

@interface ChatConversation.PinnedMessageThumbnailView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.PinnedMessageThumbnail ? thumbnail;
    nominal type descriptor for XGif.GifImageLoader gifImageLoader;
    ChatUI.ChatImageLoading imageLoader;
    ChatUtilities.VideoImageLoader videoImageLoader;
    __C.UIImageView errorIconView;
    __C.UIImageView imageView;
    nominal type descriptor for XDesignSystem.ShimmerPlaceholderView shimmerView;
    nominal type descriptor for XGif.DisplayLinkAnimatedGifView ? animatedGifView;
    protocol descriptor for Combine.Cancellable ? loadCancellable;
    ChatConversation.PinnedMessageThumbnailView.State state;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC16ChatConversation26PinnedMessageThumbnailView_h */
