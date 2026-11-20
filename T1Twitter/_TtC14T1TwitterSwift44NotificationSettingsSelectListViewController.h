//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift44NotificationSettingsSelectListViewController_h
#define _TtC14T1TwitterSwift44NotificationSettingsSelectListViewController_h
@import Foundation;

@class Swift.Bool, TFNItemsDataViewController, _$s13TFSObservable8ObserverCMn _$sySo40TFSTwitterNotificationSettingsSelectListCSgGSg, _$s17TFSUtilitiesSwift25AsynchronouslySetPropertyCMn _$sSaySSG, _$sSS, _$sSSSg, _$sSo17TFNTwitterAccountC, _$sSo40TFSTwitterNotificationSettingsSelectListCSg;

@interface T1TwitterSwift.NotificationSettingsSelectListViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    Swift.String name;
    Swift.String? offDetailDescription;
    Swift.String? onDetailDescription;
    Swift.String scribeComponent;
    nominal type descriptor for TFSObservable.Observer _$sySo40TFSTwitterNotificationSettingsSelectListCSgGSg listObserver;
    __C.TFSTwitterNotificationSettingsSelectList? list;
    nominal type descriptor for TFSUtilitiesSwift.AsynchronouslySetProperty [Swift.String] selectionsProperty;
    Swift.Bool selectionItemsHidden;
}

/* instance methods */
- (void)update:(_Bool)update;
- (id)scribePage;
- (void)selectionsUpdated:(id)updated;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift44NotificationSettingsSelectListViewController_h */
