//
#ifndef _TtC14T1TwitterSwift44AdvancedNotificationFiltersSettingsViewModel_h
#define _TtC14T1TwitterSwift44AdvancedNotificationFiltersSettingsViewModel_h
@import Foundation;

@class NSObject, T1TwitterSwift.AdvancedNotificationFiltersSettingsViewModelDelegate ?, _$s17TFSUtilitiesSwift26FailableAsynchronousLoaderCMn T1TwitterSwift.AdvancedNotificationFilterProperties ?, _$sSo16NSOperationQueueC, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.AdvancedNotificationFiltersSettingsViewModel : NSObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.AdvancedNotificationFiltersSettingsViewModelDelegate ? delegate;
    __C.TFNTwitterAccount account;
    __C.NSOperationQueue queue;
    nominal type descriptor for TFSUtilitiesSwift.FailableAsynchronousLoader T1TwitterSwift.AdvancedNotificationFilterProperties ? $__lazy_storage_$_advancedFiltersLoader;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift44AdvancedNotificationFiltersSettingsViewModel_h */
