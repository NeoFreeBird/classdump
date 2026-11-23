//
#ifndef _TtC12ChatSettings31DataUsageSettingsViewController_h
#define _TtC12ChatSettings31DataUsageSettingsViewController_h
@import Foundation;

@class ChatKotlin.NetworkConnectionStateStream, ChatModels.ChatToastActionTriggerStream, UIViewController, _$s13XDesignSystem9ListItemsCMn, _$sSh -> ChatSettings.DataUsageSettingsAttachment, _$sSo014Subsystem_ios_B42Arm64_mainMutableDataUsageSettingsProvider_p;

@interface ChatSettings.DataUsageSettingsViewController : UIViewController { // (Swift)
    /* instance variables */
    __C.Subsystem_ios_iosArm64_mainMutableDataUsageSettingsProvider mutableDataUsageSettingsProvider;
    ChatKotlin.NetworkConnectionStateStream networkConnectionStateStream;
    ChatModels.ChatToastActionTriggerStream toastActionTriggerStream;
    nominal type descriptor for XDesignSystem.ListItems list;
    Swift.Set -> ChatSettings.DataUsageSettingsAttachment attachmentsBeingWritten;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12ChatSettings31DataUsageSettingsViewController_h */
