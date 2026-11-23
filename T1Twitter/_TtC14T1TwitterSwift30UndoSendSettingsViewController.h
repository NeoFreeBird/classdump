//
#ifndef _TtC14T1TwitterSwift30UndoSendSettingsViewController_h
#define _TtC14T1TwitterSwift30UndoSendSettingsViewController_h
@import Foundation;

@class T1TwitterSwift.SubscriptionProductFeatureCoordinator, T1TwitterSwift.UndoSendSettings, TFNItemsDataViewController, _$sSo17TFNTwitterAccountC, _$sSo23TFSTwitterScribeContextC, _$sSo6TFNHUDCSg;

@interface T1TwitterSwift.UndoSendSettingsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    __C.TFNTwitterAccount account;
    __C.TFSTwitterScribeContext scribeContext;
    T1TwitterSwift.UndoSendSettings settings;
    __C.TFNHUD? settingsUpdateHUD;
    T1TwitterSwift.SubscriptionProductFeatureCoordinator featureCoordinator;
}

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* _TtC14T1TwitterSwift30UndoSendSettingsViewController_h */
