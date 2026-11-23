//
#ifndef _TtC14T1TwitterSwift42AudioSpacesHistoryManagementViewController_h
#define _TtC14T1TwitterSwift42AudioSpacesHistoryManagementViewController_h
@import Foundation;

@class Swift.Bool, TFNItemsDataViewController, _$s14TFSTwitterCore17TwitterAudiospaceCMn ?, _$sSSSg, _$sSa -> T1TwitterSwift.HistoryAudiospaceItem, _$sSo17TFNTwitterAccountC;

@interface T1TwitterSwift.AudioSpacesHistoryManagementViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    Swift.Array -> T1TwitterSwift.HistoryAudiospaceItem recordedHistoryAudiospaceItems;
    Swift.Bool isLoading;
    Swift.Bool isLoaded;
    Swift.Bool isLoadingMore;
    nominal type descriptor for TFSTwitterCore.TwitterAudiospace ? presentedAudiospace;
    Swift.String? currentCursor;
}

/* instance methods */
- (void)update:(_Bool)update;
- (void)viewDidAppear:(_Bool)appear;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift42AudioSpacesHistoryManagementViewController_h */
