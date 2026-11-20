//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC23ChatConversationDetails41ConversationAttachmentListItemContentView_h
#define _TtC23ChatConversationDetails41ConversationAttachmentListItemContentView_h
@import Foundation;

@class ChatConversationDetails.ConversationAttachmentListItemGifView, ChatConversationDetails.ConversationAttachmentListItemImageView, ChatConversationDetails.ConversationAttachmentListItemVideoView, UIView;

@interface ChatConversationDetails.ConversationAttachmentListItemContentView : UIView { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationAttachmentListItemImageView imageView;
    ChatConversationDetails.ConversationAttachmentListItemGifView gifView;
    ChatConversationDetails.ConversationAttachmentListItemVideoView videoView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC23ChatConversationDetails41ConversationAttachmentListItemContentView_h */
