//
#ifndef _TtC11ChatGrokBot15GrokBotCartView_h
#define _TtC11ChatGrokBot15GrokBotCartView_h
@import Foundation;

#include "UITableViewDelegate-Protocol.h"

@class ChatGrokBot.GrokBotCartEmptyView, ChatGrokBot.GrokBotCartFooterView, ChatGrokBot.GrokBotCartView.Content, ChatGrokBot.GrokBotCartViewListener ?, UIView, _$s5UIKit29UITableViewDiffableDataSourceCMn ChatGrokBot.GrokBotCartView.Section ChatGrokBot.GrokBotCartView.Row ?, _$sSDySS ChatGrokBot.GrokBotCart.StoreGroup, _$sSDySS ChatGrokBot.GrokBotCartLine, _$sSo11UITableViewC;

@interface ChatGrokBot.GrokBotCartView : UIView <UITableViewDelegate> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotCartViewListener ? listener;
    ChatGrokBot.GrokBotCartEmptyView emptyView;
    ChatGrokBot.GrokBotCartFooterView footerView;
    __C.UITableView tableView;
    ChatGrokBot.GrokBotCartView.Content content;
    nominal type descriptor for UIKit.UITableViewDiffableDataSource ChatGrokBot.GrokBotCartView.Section ChatGrokBot.GrokBotCartView.Row ? dataSource;
    Swift.Dictionary empty-list Swift.String ChatGrokBot.GrokBotCart.StoreGroup groupsByKey;
    Swift.Dictionary empty-list Swift.String ChatGrokBot.GrokBotCartLine linesByKey;
}

/* instance methods */
- (_Bool)tableView:(id)view shouldHighlightRowAtIndexPath:(id)path;
- (id)tableView:(id)view trailingSwipeActionsConfigurationForRowAtIndexPath:(id)path;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;

@end

#endif /* _TtC11ChatGrokBot15GrokBotCartView_h */
