//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC12ChatSettings29PrivacySettingsViewController_h
#define _TtC12ChatSettings29PrivacySettingsViewController_h
@import Foundation;

@class ChatSettings.PrivacyDisappearingMessagesStream, ChatSettings.PrivacyReadReceiptsStream, ChatSettings.PrivacyScreenshotBlockingStream, ChatSettings.PrivacySettingsListItemPluginPoint, ChatSettings.PrivacySettingsWorkerPluginPoint, UIViewController, _$s13XDesignSystem9ListItemsCMn, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatSettings.PrivacySettingsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatSettings.PrivacyDisappearingMessagesStream disappearingMessagesStream;
    ChatSettings.PrivacySettingsListItemPluginPoint listItemPluginPoint;
    ChatSettings.PrivacyReadReceiptsStream readReceiptsStream;
    ChatSettings.PrivacyScreenshotBlockingStream screenshotBlockingStream;
    ChatSettings.PrivacySettingsWorkerPluginPoint workerPluginPoint;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12ChatSettings29PrivacySettingsViewController_h */
