//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC19ChatMessageComposer28ComposerContentAccessoryView_h
#define _TtC19ChatMessageComposer28ComposerContentAccessoryView_h
@import Foundation;

@class ChatMessageComposer.ComposerActionAccessoryButton ?, ChatMessageComposer.ComposerActionDataSource ChatMessageComposer.ComposerActionAccessoryCell ?, ChatMessageComposer.ComposerCollectionView ?, ChatMessageComposer.ComposerContentAccessoryViewPosition, ChatMessageComposer.ComposerStackedLayout ?, ChatMessageComposer.MessageComposerAction ?, ChatUI.ChatColorProviding, UIView, _$sSD -> ChatMessageComposer.MessageComposerActionIdentifier ChatMessageComposer.MessageComposerAction, _$sSa -> ChatMessageComposer.MessageComposerAction, _$sSo22UICollectionViewLayoutC;

@interface ChatMessageComposer.ComposerContentAccessoryView : UIView { // (Swift)
    /* instance variables */
    ChatMessageComposer.MessageComposerAction ? primaryAction;
    Swift.Array -> ChatMessageComposer.MessageComposerAction actions;
    ChatUI.ChatColorProviding colorProvider;
    __C.UICollectionViewLayout horizontalLayout;
    ChatMessageComposer.ComposerStackedLayout ? $__lazy_storage_$_stackedLayout;
    ChatMessageComposer.ComposerCollectionView ? $__lazy_storage_$_collectionView;
    ChatMessageComposer.ComposerActionDataSource ChatMessageComposer.ComposerActionAccessoryCell ? $__lazy_storage_$_dataSource;
    ChatMessageComposer.ComposerContentAccessoryViewPosition position;
    Swift.Array -> ChatMessageComposer.MessageComposerAction displayedActions;
    Swift.Dictionary -> ChatMessageComposer.MessageComposerActionIdentifier ChatMessageComposer.MessageComposerAction displayedActionsDictionary;
    ChatMessageComposer.ComposerActionAccessoryButton ? $__lazy_storage_$_primaryActionButton;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint { double x0; double x1; })inside withEvent:(id)event;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC19ChatMessageComposer28ComposerContentAccessoryView_h */
