//
#ifndef _TtC12ChatSettings37MessageRequestsSettingsViewController_h
#define _TtC12ChatSettings37MessageRequestsSettingsViewController_h
@import Foundation;

@class ChatModels.ActiveCreatorStream, ChatSettings.MessageRequestsAllowDmsFromStream, ChatSettings.MessageRequestsAlwaysAllowSubscribersStream, ChatSettings.MessageRequestsSettingsListItemPluginPoint, ChatSettings.MessageRequestsSettingsWorkerPluginPoint, UIViewController, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatSettings.MessageRequestsSettingsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatModels.ActiveCreatorStream activeCreatorStream;
    ChatSettings.MessageRequestsAllowDmsFromStream allowDmsFromStream;
    ChatSettings.MessageRequestsAlwaysAllowSubscribersStream alwaysAllowSubscribersStream;
    ChatSettings.MessageRequestsSettingsListItemPluginPoint listItemPluginPoint;
    ChatSettings.MessageRequestsSettingsWorkerPluginPoint workerPluginPoint;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12ChatSettings37MessageRequestsSettingsViewController_h */
