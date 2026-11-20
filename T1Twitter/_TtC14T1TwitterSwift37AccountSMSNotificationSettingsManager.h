//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift37AccountSMSNotificationSettingsManager_h
#define _TtC14T1TwitterSwift37AccountSMSNotificationSettingsManager_h
@import Foundation;

@class NSObject, Swift.Bool, _$s13TFSObservable15ObservableInputVMn TwitterNotificationsData.NotificationTemplateLoadingAndAuthState, _$s13TFSObservable16ObservableEntityCMn TwitterNotificationsData.NotificationTemplateLoadingAndAuthState, _$s17TFSUtilitiesSwift26FailableAsynchronousLoaderCMn T1TwitterSwift.AccountSMSNotificationSettingsManager.SMSPhoneAndSettingsLoadResult, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.AccountSMSNotificationSettingsManager : NSObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSObservable.ObservableEntity TwitterNotificationsData.NotificationTemplateLoadingAndAuthState loadAndAuthStateObservable;
    nominal type descriptor for TFSObservable.ObservableInput TwitterNotificationsData.NotificationTemplateLoadingAndAuthState loadAndAuthStateInput;
    nominal type descriptor for TFSUtilitiesSwift.FailableAsynchronousLoader T1TwitterSwift.AccountSMSNotificationSettingsManager.SMSPhoneAndSettingsLoadResult stateLoader;
    __C.TFNTwitterAccount account;
    Swift.Bool isAddingPhoneNumber;
}

/* instance methods */
- (void)loadStateDidChange:(id)change;
- (void)didEnterForeground:(id)foreground;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift37AccountSMSNotificationSettingsManager_h */
