//
#ifndef _TtC16ChatConversation11MessageCell_h
#define _TtC16ChatConversation11MessageCell_h
@import Foundation;

@class ChatConversation.MessageCellActionHandler ?, ChatConversation.MessageContentView, ChatModels.ChatMessageItem ?, UICollectionViewCell, XVideo.AutoplayManager ?, _$sSaySo17TAVUIAutoplayable_pG;

@interface ChatConversation.MessageCell : UICollectionViewCell { // (Swift)
    /* instance variables */
    ChatConversation.MessageContentView messageContentView;
    ChatModels.ChatMessageItem ? message;
    ChatConversation.MessageCellActionHandler ? actionHandler;
    XVideo.AutoplayManager ? autoplayManager;
    [__C.TAVUIAutoplayable] registeredAutoplayables;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

#endif /* _TtC16ChatConversation11MessageCell_h */
