//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
