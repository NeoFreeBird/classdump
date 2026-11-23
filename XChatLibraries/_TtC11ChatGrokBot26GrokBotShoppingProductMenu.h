//
#ifndef _TtC11ChatGrokBot26GrokBotShoppingProductMenu_h
#define _TtC11ChatGrokBot26GrokBotShoppingProductMenu_h
@import Foundation;

#include "UIContextMenuInteractionDelegate-Protocol.h"

@class ChatGrokBot.GrokBotCartStore ?, ChatGrokBot.GrokBotShoppingProduct ?, ChatGrokBot.GrokBotShoppingSubscription ?, NSObject, Swift.Bool, Swift.Bool __C.CGPoint _$scSg, _$sSSSg, _$sSo24UIContextMenuInteractionCSg, _$sySScSg, _$syycSg;

@interface ChatGrokBot.GrokBotShoppingProductMenu : NSObject <UIContextMenuInteractionDelegate> { // (Swift)
    /* instance variables */
    ((Swift.String) -> ())? onBuy;
    (() -> ())? onMore;
    (() -> ())? onOpen;
    Swift.Bool __C.CGPoint _$scSg opensMenu;
    __C.UIContextMenuInteraction? $__lazy_storage_$_interaction;
    ChatGrokBot.GrokBotCartStore ? cart;
    Swift.Bool isBuyEnabled;
    Swift.Bool isMorePending;
    Swift.String? lockedBuyRequest;
    ChatGrokBot.GrokBotShoppingProduct ? product;
    ChatGrokBot.GrokBotShoppingSubscription ? subscription;
}

/* instance methods */
- (id)contextMenuInteraction:(id)interaction configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })location;
- (void)contextMenuInteraction:(id)interaction willEndForConfiguration:(id)configuration animator:(id)animator;
- (void)contextMenuInteraction:(id)interaction willPerformPreviewActionForMenuWithConfiguration:(id)configuration animator:(id)animator;
- (id)init;

@end

#endif /* _TtC11ChatGrokBot26GrokBotShoppingProductMenu_h */
