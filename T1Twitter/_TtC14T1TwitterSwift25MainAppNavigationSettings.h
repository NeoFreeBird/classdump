//
#ifndef _TtC14T1TwitterSwift25MainAppNavigationSettings_h
#define _TtC14T1TwitterSwift25MainAppNavigationSettings_h
@import Foundation;

@class T1TwitterSwift.T1CommunitiesAppNavigationEntryVisibilityManager ?, T1TwitterSwift.TabCustomizationConfig ?, _$s7Combine9PublishedVMn _$sySa -> T1TwitterSwift.MainAppTabIdentifier, _$sSSSg, _$sSa -> _$s7Combine14AnyCancellableCMn, _$sSaySo8NSObject_pG, _$sSo17TFNTwitterAccountC, _$sSo8NSObject_pSg, _$syXlSg, _TtCs12_SwiftObject;

@interface T1TwitterSwift.MainAppNavigationSettings : Swift._SwiftObject { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    Swift.Array -> nominal type descriptor for Combine.AnyCancellable cancellables;
    nominal type descriptor for Combine.Published  empty-list Swift.Array -> T1TwitterSwift.MainAppTabIdentifier _tabIdentifiers;
    Swift.String? $__lazy_storage_$_tabIdentifiersKey;
    Swift.String? $__lazy_storage_$_compactCensusDayKey;
    Swift.String? $__lazy_storage_$_regularCensusDayKey;
    T1TwitterSwift.TabCustomizationConfig ? $__lazy_storage_$_tabCustomizationConfig;
    Swift.AnyObject? tabCustomizationConfigUpdateObserver;
    __C.NSObject? userDataObserver;
    [__C.NSObject] censusObservers;
    T1TwitterSwift.T1CommunitiesAppNavigationEntryVisibilityManager ? $__lazy_storage_$_communitiesAppNavigationEntryVisibilityManager;
}

@end

#endif /* _TtC14T1TwitterSwift25MainAppNavigationSettings_h */
