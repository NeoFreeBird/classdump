//
#ifndef _TtC23ChatConversationDetails36ConversationAttachmentTabsPagingView_h
#define _TtC23ChatConversationDetails36ConversationAttachmentTabsPagingView_h
@import Foundation;

#include "UIScrollViewDelegate-Protocol.h"

@class ChatConversationDetails.ConversationAttachmentTabsPagingScrollView, ChatConversationDetails.ConversationAttachmentTabsPagingViewListener ?, UIView, _$sSaySo6UIViewCG, _$sSi;

@interface ChatConversationDetails.ConversationAttachmentTabsPagingView : UIView <UIScrollViewDelegate> { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationAttachmentTabsPagingViewListener ? listener;
    Swift.Int pageIndex;
    [__C.UIView] pageViews;
    ChatConversationDetails.ConversationAttachmentTabsPagingScrollView scrollView;
}

/* instance methods */
- (void)scrollViewDidScroll:(id)scroll;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC23ChatConversationDetails36ConversationAttachmentTabsPagingView_h */
