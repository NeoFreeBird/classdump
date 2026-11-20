//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift32PersonalizationSettingsViewModel_h
#define _TtC14T1TwitterSwift32PersonalizationSettingsViewModel_h
@import Foundation;

@class NSObject, T1TwitterSwift.PersonalizationSettingsViewModelDelegate ?, _$s14TFSTwitterCore22TwitterUserPreferencesCMn ?, _$s14TFSTwitterCore26TwitterUserExtendedProfileC8BirthdayCMn ?, _$s17TFSUtilitiesSwift25AsynchronouslySetPropertyCMn _$sySbGSg, _$sSo16NSOperationQueueC, _$sSo17TFNTwitterAccountC, _$sySbcSg, _$syycSg;

@interface T1TwitterSwift.PersonalizationSettingsViewModel : NSObject { // (Swift)
    /* instance variables */
    T1TwitterSwift.PersonalizationSettingsViewModelDelegate ? delegate;
    __C.TFNTwitterAccount account;
    __C.NSOperationQueue queue;
    (() -> ())? weakSelfQueueSettingValueErrorNotificationIfNeeded;
    ((Swift.Bool) -> ())? weakSelfDidUpdateSettingProperty;
    nominal type descriptor for TFSTwitterCore.TwitterUserPreferences ? userPreferences;
    nominal type descriptor for TFSTwitterCore.TwitterUserExtendedProfile.Birthday ? birthday;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_internal_adsPersonalizationEnabled;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_internal_cookiesPersonalizationEnabled;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_internal_locationHistoryPersonalizationEnabled;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_internal_loggedOutDevicesPersonalizationEnabled;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_internal_sharingDataWithPartnersPersonalizationEnabled;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_internal_sharingDataWithGrokEnabled;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_internal_grokPersonalizationEnabled;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_internal_grokMemoryEnabled;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_internal_shareAttributionEnabled;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_internal_youTubeNativePlaybackEnabled;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift32PersonalizationSettingsViewModel_h */
