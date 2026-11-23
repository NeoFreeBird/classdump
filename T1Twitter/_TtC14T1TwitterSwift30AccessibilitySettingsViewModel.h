//
#ifndef _TtC14T1TwitterSwift30AccessibilitySettingsViewModel_h
#define _TtC14T1TwitterSwift30AccessibilitySettingsViewModel_h
@import Foundation;

@class NSObject, T1TwitterSwift.AccessibilitySettingsViewModelDelegate ?, _$s17TFSUtilitiesSwift25AsynchronouslySetPropertyCMn _$sySbGSg, _$sSo16NSOperationQueueC, _$sSo17TFNTwitterAccountC, _$sySbcSg, _$syycSg;

@interface T1TwitterSwift.AccessibilitySettingsViewModel : NSObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.AccessibilitySettingsViewModelDelegate ? delegate;
    __C.TFNTwitterAccount account;
    __C.NSOperationQueue queue;
    (() -> ())? weakSelfQueueSettingValueErrorNotificationIfNeeded;
    ((Swift.Bool) -> ())? weakSelfDidUpdateSettingProperty;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_internalAltTextPromptEnabled;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift30AccessibilitySettingsViewModel_h */
