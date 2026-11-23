//
#ifndef _TtC16ChatConversation29PinnedMessagesUnpinAllBarView_h
#define _TtC16ChatConversation29PinnedMessagesUnpinAllBarView_h
@import Foundation;

@class ChatConversation.PinnedMessagesUnpinAllBarViewListener ?, UIView, _$s13XDesignSystem6ButtonCMn, _$sSo15CAGradientLayerC;

@interface ChatConversation.PinnedMessagesUnpinAllBarView : UIView { // (Swift)
    /* instance variables */
    ChatConversation.PinnedMessagesUnpinAllBarViewListener ? listener;
    __C.CAGradientLayer scrimLayer;
    nominal type descriptor for XDesignSystem.Button unpinAllButton;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (void)didTapUnpinAll;

@end

#endif /* _TtC16ChatConversation29PinnedMessagesUnpinAllBarView_h */
