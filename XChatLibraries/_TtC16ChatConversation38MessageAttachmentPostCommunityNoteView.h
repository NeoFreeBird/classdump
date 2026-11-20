//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation38MessageAttachmentPostCommunityNoteView_h
#define _TtC16ChatConversation38MessageAttachmentPostCommunityNoteView_h
@import Foundation;

@class ChatConversation.CommunityNoteHeaderView, ChatConversation.MessageAttachmentPostCommunityNoteView.Presentation, ChatModels.PostCommunityNotePreview ?, UIView, _$sSo12CAShapeLayerC, _$sSo7UILabelC;

@interface ChatConversation.MessageAttachmentPostCommunityNoteView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.CommunityNoteHeaderView headerView;
    __C.UILabel bodyLabel;
    __C.UILabel showNoteLabel;
    __C.CAShapeLayer borderLayer;
    ChatModels.PostCommunityNotePreview ? model;
    ChatConversation.MessageAttachmentPostCommunityNoteView.Presentation presentation;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC16ChatConversation38MessageAttachmentPostCommunityNoteView_h */
