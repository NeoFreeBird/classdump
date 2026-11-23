//
#ifndef _TtC20ChatConversationList27ConversationListBotItemCell_h
#define _TtC20ChatConversationList27ConversationListBotItemCell_h
@import Foundation;

@class ChatConversationList.ConversationListBotItemContentView, ChatConversationList.ConversationListBotItemViewModel ?, UITableViewCell;

@interface ChatConversationList.ConversationListBotItemCell : UITableViewCell { // (Swift)
    /* instance variables */
    ChatConversationList.ConversationListBotItemContentView itemContentView;
    ChatConversationList.ConversationListBotItemViewModel ? viewModel;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end

#endif /* _TtC20ChatConversationList27ConversationListBotItemCell_h */
