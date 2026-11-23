//
#ifndef _TtC12ChatSettings45ExternalAppIntegrationsSettingsViewController_h
#define _TtC12ChatSettings45ExternalAppIntegrationsSettingsViewController_h
@import Foundation;

@class ChatModels.ExternalAppIntegrationsStream, ChatSettings.ExternalAppIntegrationsSettingsActionTriggerStream, ChatSettings.ExternalAppIntegrationsSettingsView, ChatSettings.ExternalAppIntegrationsSettingsWorkerPluginPoint, UIViewController, _$sSh -> _$s7Combine14AnyCancellableCMn;

@interface ChatSettings.ExternalAppIntegrationsSettingsViewController : UIViewController { // (Swift)
    /* instance variables */
    ChatSettings.ExternalAppIntegrationsSettingsActionTriggerStream actionTriggerStream;
    ChatModels.ExternalAppIntegrationsStream integrationsStream;
    ChatSettings.ExternalAppIntegrationsSettingsWorkerPluginPoint workerPluginPoint;
    ChatSettings.ExternalAppIntegrationsSettingsView internalView;
    Swift.Set -> nominal type descriptor for Combine.AnyCancellable subscriptions;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)loadView;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC12ChatSettings45ExternalAppIntegrationsSettingsViewController_h */
