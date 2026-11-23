//
#ifndef _TtC16ChatConversation34MessageAttachmentPostMediaGridView_h
#define _TtC16ChatConversation34MessageAttachmentPostMediaGridView_h
@import Foundation;

@class UIView, _$sSa -> ChatConversation.MessageAttachmentPostMediaView, _$sSi;

@interface ChatConversation.MessageAttachmentPostMediaGridView : UIView { // (Swift)
    /* instance variables */
    Swift.Array -> ChatConversation.MessageAttachmentPostMediaView tiles;
    Swift.Int visibleTileCount;
}

/* instance methods */
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC16ChatConversation34MessageAttachmentPostMediaGridView_h */
