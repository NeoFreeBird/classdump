//
#ifndef _TtC12ChatSettings31HistoryChatPickerViewController_h
#define _TtC12ChatSettings31HistoryChatPickerViewController_h
@import Foundation;

#include "UISearchResultsUpdating-Protocol.h"

@class ChatSettings.HistoryChatPickerActionTriggerStream, ChatSettings.HistoryChatPickerQueryStream, ChatSettings.HistoryChatPickerSearchStyle, ChatSettings.HistoryChatPickerStateStream, ChatSettings.HistoryChatPickerView ?, ChatSettings.HistoryChatPickerWorkerPluginPoint, ChatUI.ChatImageLoading, Swift.Bool, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn, _$sSo18UISearchControllerCSg;

@interface ChatSettings.HistoryChatPickerViewController : UIViewController <UISearchResultsUpdating> { // (Swift)
    /* instance variables */
    ChatSettings.HistoryChatPickerView ? $__lazy_storage_$_internalView;
    ChatSettings.HistoryChatPickerActionTriggerStream actionTriggerStream;
    ChatUI.ChatImageLoading imageLoader;
    ChatSettings.HistoryChatPickerQueryStream queryStream;
    ChatSettings.HistoryChatPickerSearchStyle searchStyle;
    ChatSettings.HistoryChatPickerStateStream stateStream;
    Swift.Bool usesNativeSearchController;
    ChatSettings.HistoryChatPickerWorkerPluginPoint workerPluginPoint;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
    __C.UISearchController? $__lazy_storage_$_searchController;
}

/* instance methods */
- (void)updateSearchResultsForSearchController:(id)controller;
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12ChatSettings31HistoryChatPickerViewController_h */
