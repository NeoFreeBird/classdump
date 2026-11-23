//
#ifndef _TtC20ChatConversationList24ConversationListItemCell_h
#define _TtC20ChatConversationList24ConversationListItemCell_h
@import Foundation;

@class ChatConversationList.ConversationListItemContentView, ChatConversationList.ConversationListItemViewModel ?, UITableViewCell;

@interface ChatConversationList.ConversationListItemCell : UITableViewCell { // (Swift)
    /* instance variables */
    ChatConversationList.ConversationListItemContentView itemContentView;
    ChatConversationList.ConversationListItemViewModel ? viewModel;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)prepareForReuse;
- (void)layoutSubviews;

@end

#endif /* _TtC20ChatConversationList24ConversationListItemCell_h */
