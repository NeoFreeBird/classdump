//
#ifndef _TtC12ChatSettings33ChatHistorySettingsViewController_h
#define _TtC12ChatSettings33ChatHistorySettingsViewController_h
@import Foundation;

@class ChatSettings.ChatHistorySettingsFullHistoryListItemPluginPoint, ChatSettings.ChatHistorySettingsListItemPluginPoint, ChatSettings.ChatHistorySettingsWorkerPluginPoint, UIViewController, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatSettings.ChatHistorySettingsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatSettings.ChatHistorySettingsFullHistoryListItemPluginPoint fullHistoryListItemPluginPoint;
    ChatSettings.ChatHistorySettingsListItemPluginPoint listItemPluginPoint;
    ChatSettings.ChatHistorySettingsWorkerPluginPoint workerPluginPoint;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12ChatSettings33ChatHistorySettingsViewController_h */
