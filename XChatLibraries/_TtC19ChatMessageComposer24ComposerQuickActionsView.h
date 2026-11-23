//
#ifndef _TtC19ChatMessageComposer24ComposerQuickActionsView_h
#define _TtC19ChatMessageComposer24ComposerQuickActionsView_h
@import Foundation;

@class ChatMessageComposer.ComposerActionDataSource ChatMessageComposer.ComposerQuickActionCell ?, ChatMessageComposer.MessageComposerQuickActionsViewModel ?, UIView, _$sSD -> ChatMessageComposer.MessageComposerActionIdentifier ChatMessageComposer.MessageComposerAction, _$sSo16UICollectionViewC;

@interface ChatMessageComposer.ComposerQuickActionsView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerQuickActionsViewModel ? viewModel;
    __C.UICollectionView collectionView;
    ChatMessageComposer.ComposerActionDataSource ChatMessageComposer.ComposerQuickActionCell ? $__lazy_storage_$_dataSource;
    Swift.Dictionary -> ChatMessageComposer.MessageComposerActionIdentifier ChatMessageComposer.MessageComposerAction actionsDictionary;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)initWithCoder:(id)coder;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@end

#endif /* _TtC19ChatMessageComposer24ComposerQuickActionsView_h */
