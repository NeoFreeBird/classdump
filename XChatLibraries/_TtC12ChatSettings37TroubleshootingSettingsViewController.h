//
#ifndef _TtC12ChatSettings37TroubleshootingSettingsViewController_h
#define _TtC12ChatSettings37TroubleshootingSettingsViewController_h
@import Foundation;

@class ChatSettings.TroubleshootingDebugLogsStream, ChatSettings.TroubleshootingDebugLogsUploadStream, ChatSettings.TroubleshootingSettingsListItemPluginPoint, ChatSettings.TroubleshootingSettingsWorkerPluginPoint, UIViewController, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatSettings.TroubleshootingSettingsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatSettings.TroubleshootingDebugLogsStream debugLogsStream;
    ChatSettings.TroubleshootingSettingsListItemPluginPoint listItemPluginPoint;
    ChatSettings.TroubleshootingDebugLogsUploadStream uploadStream;
    ChatSettings.TroubleshootingSettingsWorkerPluginPoint workerPluginPoint;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)viewDidDisappear:(_Bool)disappear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12ChatSettings37TroubleshootingSettingsViewController_h */
