//
#ifndef _TtC12ChatSettings26ChatSettingsViewController_h
#define _TtC12ChatSettings26ChatSettingsViewController_h
@import Foundation;

@class ChatSettings.ChatSettingsListItemPluginPoint, ChatSettings.ChatSettingsPasscodeRowStream, ChatSettings.ChatSettingsWorkerPluginPoint, UIViewController, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatSettings.ChatSettingsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatSettings.ChatSettingsListItemPluginPoint listItemPluginPoint;
    ChatSettings.ChatSettingsPasscodeRowStream passcodeRowStream;
    ChatSettings.ChatSettingsWorkerPluginPoint workerPluginPoint;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12ChatSettings26ChatSettingsViewController_h */
