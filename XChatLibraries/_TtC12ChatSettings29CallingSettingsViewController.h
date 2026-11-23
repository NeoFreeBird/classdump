//
#ifndef _TtC12ChatSettings29CallingSettingsViewController_h
#define _TtC12ChatSettings29CallingSettingsViewController_h
@import Foundation;

@class ChatSettings.CallingContactsProviderStream, ChatSettings.CallingSettingsListItemPluginPoint, ChatSettings.CallingSettingsStream, ChatSettings.CallingSettingsWorkerPluginPoint, UIViewController, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatSettings.CallingSettingsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatSettings.CallingSettingsStream callingSettingsStream;
    ChatSettings.CallingContactsProviderStream contactsProviderStream;
    ChatSettings.CallingSettingsListItemPluginPoint listItemPluginPoint;
    ChatSettings.CallingSettingsWorkerPluginPoint workerPluginPoint;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12ChatSettings29CallingSettingsViewController_h */
