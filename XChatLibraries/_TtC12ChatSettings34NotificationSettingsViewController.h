//
#ifndef _TtC12ChatSettings34NotificationSettingsViewController_h
#define _TtC12ChatSettings34NotificationSettingsViewController_h
@import Foundation;

@class ChatModels.ChatNotificationSettingStore, ChatSettings.NotificationPermissionStream, ChatSettings.NotificationSettingsListItemPluginPoint, ChatSettings.NotificationSettingsWorkerPluginPoint, UIViewController, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatSettings.NotificationSettingsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatSettings.NotificationSettingsListItemPluginPoint listItemPluginPoint;
    ChatModels.ChatNotificationSettingStore notificationSettingStore;
    ChatSettings.NotificationPermissionStream permissionStream;
    ChatSettings.NotificationSettingsWorkerPluginPoint workerPluginPoint;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12ChatSettings34NotificationSettingsViewController_h */
