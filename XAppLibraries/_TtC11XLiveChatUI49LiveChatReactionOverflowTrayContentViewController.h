//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11XLiveChatUI49LiveChatReactionOverflowTrayContentViewController_h
#define _TtC11XLiveChatUI49LiveChatReactionOverflowTrayContentViewController_h
@import Foundation;

@class XDiffableCollection.DiffableView, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem5InputCMn, _$sSS, _$sSa -> XLiveChatUI.LiveChatReactionEmoji, _$sShySSG, _$sSo6UIViewC, _$sSo7UILabelC, _$sySSc;

@interface XLiveChatUI.LiveChatReactionOverflowTrayContentViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    Swift.Array -> XLiveChatUI.LiveChatReactionEmoji emojis;
    Swift.Array -> XLiveChatUI.LiveChatReactionEmoji frequentEmojis;
    Swift.Set<Swift.String> viewerEmojis;
    (Swift.String) -> () onReact;
    nominal type descriptor for XDesignSystem.Input search;
    __C.UIView resultsHost;
    XDiffableCollection.DiffableView grid;
    __C.UILabel noResultsLabel;
    Swift.String query;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11XLiveChatUI49LiveChatReactionOverflowTrayContentViewController_h */
