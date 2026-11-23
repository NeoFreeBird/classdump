//
#ifndef _TtC16ChatConversation34PinnedMessageHeaderContentCubeView_h
#define _TtC16ChatConversation34PinnedMessageHeaderContentCubeView_h
@import Foundation;

@class ChatConversation.PinnedMessageThumbnailView, UIView, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatConversation.PinnedMessageHeaderContentCubeView : UIView { // (Swift)
    /* instance variables */
    __C.UIView faceView;
    __C.UILabel previewLabel;
    __C.UILabel titleLabel;
    ChatConversation.PinnedMessageThumbnailView thumbnailView;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC16ChatConversation34PinnedMessageHeaderContentCubeView_h */
