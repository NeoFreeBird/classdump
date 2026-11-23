//
#ifndef _TtC20ChatConversationList30ConversationListHeaderItemCell_h
#define _TtC20ChatConversationList30ConversationListHeaderItemCell_h
@import Foundation;

@class ChatConversationList.ConversationListHeaderItemViewModel.Style ?, UITableViewCell, _$sSo11UIImageViewC, _$sSo6UIViewC, _$sSo7UILabelC;

@interface ChatConversationList.ConversationListHeaderItemCell : UITableViewCell { // (Swift)
    /* instance variables */
    __C.UIImageView iconView;
    __C.UILabel titleLabel;
    __C.UILabel messageLabel;
    __C.UIView dividerView;
    ChatConversationList.ConversationListHeaderItemViewModel.Style ? headerStyle;
}

/* instance methods */
- (id)initWithStyle:(long long)style reuseIdentifier:(id)identifier;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;

@end

#endif /* _TtC20ChatConversationList30ConversationListHeaderItemCell_h */
