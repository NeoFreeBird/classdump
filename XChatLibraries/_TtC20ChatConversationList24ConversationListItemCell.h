//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
