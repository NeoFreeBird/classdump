//
#ifndef _TtC11ChatGrokBot34GrokBotForwardPickerViewController_h
#define _TtC11ChatGrokBot34GrokBotForwardPickerViewController_h
@import Foundation;

#include "UISearchResultsUpdating-Protocol.h"

@class ChatGrokBot.GrokBotForwardPickerViewModel, ChatGrokBot.GrokBotScribing, ChatUI.ChatHostingController ChatGrokBot.GrokBotForwardPickerView _$sGSgXw ->, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatGrokBot.GrokBotForwardPickerViewController : UIViewController <UISearchResultsUpdating> { // (Swift)
    /* instance variables */
    ChatGrokBot.GrokBotScribing scriber;
    ChatGrokBot.GrokBotForwardPickerViewModel viewModel;
    ChatUI.ChatHostingController ChatGrokBot.GrokBotForwardPickerView _$sGSgXw -> listHostingController;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (void)updateSearchResultsForSearchController:(id)controller;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC11ChatGrokBot34GrokBotForwardPickerViewController_h */
