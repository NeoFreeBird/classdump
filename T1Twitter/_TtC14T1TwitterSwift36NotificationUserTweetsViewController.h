//
#ifndef _TtC14T1TwitterSwift36NotificationUserTweetsViewController_h
#define _TtC14T1TwitterSwift36NotificationUserTweetsViewController_h
@import Foundation;

@class T1TwitterSwift.NotificationUserTweetsViewController.LoadingState, TFNItemsDataViewController, TFNTwitterAccount, _$s13TFSObservable16ObservableEntityCMn T1TwitterSwift.NotificationUserTweetsViewController.LoadingState, _$s13TFSObservable8ObserverCMn T1TwitterSwift.NotificationUserTweetsViewController.LoadingState ?, _$sSo17TFNTwitterAccountC, _$sSo18T1DeviceFollowListC;

@interface T1TwitterSwift.NotificationUserTweetsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSObservable.ObservableEntity T1TwitterSwift.NotificationUserTweetsViewController.LoadingState loadingStateObservable;
    nominal type descriptor for TFSObservable.Observer T1TwitterSwift.NotificationUserTweetsViewController.LoadingState ? loadingStateObserver;
    T1TwitterSwift.NotificationUserTweetsViewController.LoadingState loadingState;
    __C.T1DeviceFollowList deviceFollowingList;
}

@property (nonatomic, readonly) TFNTwitterAccount *account;

/* instance methods */
- (void)viewDidAppear:(_Bool)appear;
- (void)didAddDeviceFollowing:(id)following;
- (void)update:(_Bool)update;
- (id)scribePage;
- (id)scribeSection;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift36NotificationUserTweetsViewController_h */
