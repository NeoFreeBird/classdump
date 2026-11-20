//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1NotificationChannelSettingsViewController_h
#define T1NotificationChannelSettingsViewController_h
@import Foundation;

#include "T1SettingsAuthorizationInstructionsAdapterDelegate-Protocol.h"

@class TFNItemsDataViewController;

@interface T1NotificationChannelSettingsViewController : TFNItemsDataViewController <T1SettingsAuthorizationInstructionsAdapterDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *highlightState;
    NSNumber"16@0:8 *channel;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *deviceFollowCountLoader;
    NSNumber"16@0:8 *loadingAndAuthStateObserver;
    NSNumber"16@0:8 *loadingAndAuthState;
    NSNumber"16@0:8 *hasLoggedPromptImpression;
}

/* class methods */
+ (id)notificationUserTweetsViewControllerForAccount:(id)account;
+ (id)pushSettingsFor:(id)_for highlightRowIdentifier:(id)identifier;
+ (id)smsSettingsFor:(id)_for;

/* instance methods */
- (void)viewWillAppear:(_Bool)appear;
- (void)willDisplayCell:(id)cell forItem:(id)item atIndexPath:(id)path;
- (void)update:(_Bool)update;
- (void)deviceFollowCountDidChange:(id)change;
- (void)authorizationInstructionsAdapterDidOpenSettings:(id)settings;
- (void)settingsValuesPropertyDidUpdate:(id)update;
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1NotificationChannelSettingsViewController_h */
