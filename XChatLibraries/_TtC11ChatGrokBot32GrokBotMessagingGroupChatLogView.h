//
#ifndef _TtC11ChatGrokBot32GrokBotMessagingGroupChatLogView_h
#define _TtC11ChatGrokBot32GrokBotMessagingGroupChatLogView_h
@import Foundation;

#include "UICollectionViewDelegateFlowLayout-Protocol.h"

@class ChatGrokBot.GrokBotMessagingGroupChatLineView, ChatGrokBot.GrokBotMessagingGroupChatLog, UIView, _$s12CoreGraphics7CGFloatVMn, _$s5UIKit34UICollectionViewDiffableDataSourceCMn ChatGrokBot.GrokBotMessagingGroupChatLogView.Section String?, _$sSDySS ChatGrokBot.GrokBotMessagingGroupChatLine, _$sSDySS ChatGrokBot.GrokBotMessagingGroupChatLine line_ _$s12CoreGraphics7CGFloatVMn heightt, _$sSS, _$sSo16UICollectionViewC, _$sSo7UIColorCSg, _$sSo7UILabelC;

@interface ChatGrokBot.GrokBotMessagingGroupChatLogView : UIView <UICollectionViewDelegateFlowLayout> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotMessagingGroupChatLog log;
    __C.UIColor? botBubbleColor;
    Swift.String botName;
    __C.UIColor? userBubbleColor;
    __C.UICollectionView collectionView;
    __C.UILabel noticeLabel;
    ChatGrokBot.GrokBotMessagingGroupChatLineView sizingLineView;
    nominal type descriptor for UIKit.UICollectionViewDiffableDataSource ChatGrokBot.GrokBotMessagingGroupChatLogView.Section String? dataSource;
    Swift.Dictionary empty-list Swift.String ChatGrokBot.GrokBotMessagingGroupChatLine line_ nominal type descriptor for CoreGraphics.CGFloat heightt heightCache;
    nominal type descriptor for CoreGraphics.CGFloat lastWidth;
    Swift.Dictionary empty-list Swift.String ChatGrokBot.GrokBotMessagingGroupChatLine linesByID;
}

/* instance methods */
- (struct CGSize { double x0; double x1; })collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)path;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)change;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC11ChatGrokBot32GrokBotMessagingGroupChatLogView_h */
