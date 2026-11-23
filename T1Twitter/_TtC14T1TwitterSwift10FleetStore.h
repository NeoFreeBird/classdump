//
#ifndef _TtC14T1TwitterSwift10FleetStore_h
#define _TtC14T1TwitterSwift10FleetStore_h
@import Foundation;

@class Swift.Bool, T1TwitterSwift.FleetsUserDefaults ?, _$s13TFSObservable15ObservableInputVMn _$sySD -> _$ss5Int64VMn T1TwitterSwift.UserPresenceEntry, _$s13TFSObservable16ObservableEntityCMn _$sySD -> _$ss5Int64VMn T1TwitterSwift.UserPresenceEntry, _$s15ObservableValue08WritableaB0CMn _$sySa -> T1TwitterSwift.FleetLineThread, _$sSD -> _$ss5Int64VMn T1TwitterSwift.UserPresenceEntry, _$sSD -> _$ss5Int64VMn _$sSo14TFNTwitterUserC, _$sSh -> _$ss5Int64VMn, _$sSo17TFNTwitterAccountC, _TtCs12_SwiftObject;

@interface T1TwitterSwift.FleetStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for ObservableValue.WritableObservableValue  empty-list Swift.Array -> T1TwitterSwift.FleetLineThread __fleetLineThreads;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 T1TwitterSwift.UserPresenceEntry userPresenceCache;
    Swift.Set -> nominal type descriptor for Swift.Int64 potentiallyStalePresenceUserIDs;
    nominal type descriptor for TFSObservable.ObservableEntity  empty-list Swift.Dictionary -> nominal type descriptor for Swift.Int64 T1TwitterSwift.UserPresenceEntry userPresenceCollectionObservable;
    nominal type descriptor for TFSObservable.ObservableInput  empty-list Swift.Dictionary -> nominal type descriptor for Swift.Int64 T1TwitterSwift.UserPresenceEntry userPresenceCollectionInput;
    Swift.Bool fleetlineUpdated;
    __C.TFNTwitterAccount account;
    T1TwitterSwift.FleetsUserDefaults ? $__lazy_storage_$_userDefaults;
    Swift.Dictionary -> nominal type descriptor for Swift.Int64 __C.TFNTwitterUser userCache;
}

@end

#endif /* _TtC14T1TwitterSwift10FleetStore_h */
