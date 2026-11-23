//
#ifndef _TtC21ChatMessageActionTray31MessageActionTrayViewController_h
#define _TtC21ChatMessageActionTray31MessageActionTrayViewController_h
@import Foundation;

@class ChatEmojiPicker.EmojiPickerPresenter, ChatMessageActionTray.MessageActionTrayViewModel, ChatMessageActionTray.MessageQuickReactionsView, Swift.Bool, _$s13XDesignSystem30StackTrayContentViewControllerCN, _$s13XDesignSystem9ListItemsCMn, _$sScTyyt _$ss5NeverOMn ?, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatMessageActionTray.MessageActionTrayViewController : type metadata for XDesignSystem.StackTrayContentViewController { // (Swift)
    /* instance variables */
    ChatEmojiPicker.EmojiPickerPresenter emojiPickerPresenter;
    ChatMessageActionTray.MessageActionTrayViewModel viewModel;
    ChatMessageActionTray.MessageQuickReactionsView reactionsView;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Bool hasAppeared;
    Swift.Task empty-list () nominal type descriptor for Swift.Never ? observationTask;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC21ChatMessageActionTray31MessageActionTrayViewController_h */
