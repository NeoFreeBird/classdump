//
#ifndef _TtC14T1TwitterSwift31QualityFilterSettingsProperties_h
#define _TtC14T1TwitterSwift31QualityFilterSettingsProperties_h
@import Foundation;

@class Swift.Bool, _$s17TFSUtilitiesSwift25AsynchronouslySetPropertyCMn _$sySbGSg, _$s17TFSUtilitiesSwift26FailableAsynchronousLoaderCMn _$sySo18TFSTwitterSettingsCGSg, _$sSo16NSOperationQueueC, _$sSo17TFNTwitterAccountC, _$sSo8NSObject_pSg, _TtCs12_SwiftObject;

@interface T1TwitterSwift.QualityFilterSettingsProperties : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.NSOperationQueue queue;
    __C.NSObject? loaderObserver;
    Swift.Bool hasLoadedOnce;
    nominal type descriptor for TFSUtilitiesSwift.FailableAsynchronousLoader _$sySo18TFSTwitterSettingsCGSg $__lazy_storage_$_settingsLoader;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty _$sySbGSg $__lazy_storage_$_property;
}

@end

#endif /* _TtC14T1TwitterSwift31QualityFilterSettingsProperties_h */
