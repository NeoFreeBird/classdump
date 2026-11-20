//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16ChatConversation22PinnedMessagesListView_h
#define _TtC16ChatConversation22PinnedMessagesListView_h
@import Foundation;

@class ChatConversation.PinnedMessagesListViewListener ?, ChatConversation.PinnedMessagesListViewModel, ChatConversation.PinnedMessagesStateView, ChatConversation.PinnedMessagesUnpinAllBarView, UIView, _$sSo23UIActivityIndicatorViewC, _$sSo6UIViewCSg;

@interface ChatConversation.PinnedMessagesListView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.PinnedMessagesListViewListener ? listener;
    __C.UIView? contentView;
    ChatConversation.PinnedMessagesListViewModel viewModel;
    ChatConversation.PinnedMessagesUnpinAllBarView unpinAllBarView;
    __C.UIActivityIndicatorView activityIndicatorView;
    ChatConversation.PinnedMessagesStateView stateView;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC16ChatConversation22PinnedMessagesListView_h */
