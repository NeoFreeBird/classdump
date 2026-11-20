//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift34NotificationEmailSettingsViewModel_h
#define _TtC14T1TwitterSwift34NotificationEmailSettingsViewModel_h
@import Foundation;

@class NSObject, T1TwitterSwift.NotificationEmailSettingsViewModelDelegate ?, _$s17TFSUtilitiesSwift26FailableAsynchronousLoaderCMn T1TwitterSwift.NotificationEmailSettingsProperties ?, _$sSo16NSOperationQueueC, _$sSo17TFNTwitterAccountC, _$syycSg;

@interface T1TwitterSwift.NotificationEmailSettingsViewModel : NSObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.NotificationEmailSettingsViewModelDelegate ? delegate;
    __C.TFNTwitterAccount account;
    __C.NSOperationQueue queue;
    (() -> ())? weakSelfDidEncounterErrorSettingProperty;
    (() -> ())? weakSelfDidUpdateSettingProperty;
    nominal type descriptor for TFSUtilitiesSwift.FailableAsynchronousLoader T1TwitterSwift.NotificationEmailSettingsProperties ? $__lazy_storage_$_notificationEmailSettingsLoader;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift34NotificationEmailSettingsViewModel_h */
