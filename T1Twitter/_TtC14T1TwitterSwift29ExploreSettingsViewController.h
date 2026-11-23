//
#ifndef _TtC14T1TwitterSwift29ExploreSettingsViewController_h
#define _TtC14T1TwitterSwift29ExploreSettingsViewController_h
@import Foundation;

@class TFNItemsDataViewController, _$s13TFSObservable8ObserverCMn T1TwitterSwift.ExploreSettingsProperties _$sSgGSg ->, _$s17TFSUtilitiesSwift26FailableAsynchronousLoaderCMn T1TwitterSwift.ExploreSettingsProperties ?, _$sSo17T1ExploreFeaturesC, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.ExploreSettingsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    __C.T1ExploreFeatures features;
    __C.TFNTwitterAccount account;
    nominal type descriptor for TFSUtilitiesSwift.FailableAsynchronousLoader T1TwitterSwift.ExploreSettingsProperties ? $__lazy_storage_$_exploreSettingsLoader;
    nominal type descriptor for TFSObservable.Observer T1TwitterSwift.ExploreSettingsProperties _$sSgGSg -> exploreSettingsLoaderObserver;
}

/* instance methods */
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift29ExploreSettingsViewController_h */
