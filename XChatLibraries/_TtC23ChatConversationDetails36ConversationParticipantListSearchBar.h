//
#ifndef _TtC23ChatConversationDetails36ConversationParticipantListSearchBar_h
#define _TtC23ChatConversationDetails36ConversationParticipantListSearchBar_h
@import Foundation;

@class ChatConversationDetails.ConversationParticipantListSearchBarListener ?, UIView, _$s13XDesignSystem5InputCMn;

@interface ChatConversationDetails.ConversationParticipantListSearchBar : UIView { // (Swift)
    /* instance variables */
    ChatConversationDetails.ConversationParticipantListSearchBarListener ? listener;
    nominal type descriptor for XDesignSystem.Input input;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;

@end

#endif /* _TtC23ChatConversationDetails36ConversationParticipantListSearchBar_h */
