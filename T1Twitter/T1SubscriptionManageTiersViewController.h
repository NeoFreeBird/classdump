//
#ifndef T1SubscriptionManageTiersViewController_h
#define T1SubscriptionManageTiersViewController_h
@import Foundation;

#include "TUIErrorDataViewAdapterDelegate-Protocol.h"

@class TFNItemsDataViewController;

@interface T1SubscriptionManageTiersViewController : TFNItemsDataViewController <TUIErrorDataViewAdapterDelegate> { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *fetcherItem;
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *scribeContext;
    NSNumber"16@0:8 *targetTier;
    NSNumber"16@0:8 *targetPlan;
    NSNumber"16@0:8 *referringPage;
    NSNumber"16@0:8 *redirectSuccessURL;
    NSNumber"16@0:8 *headerItem;
    NSNumber"16@0:8 *userPreferences;
    NSNumber"16@0:8 *isLoadingPreferences;
    NSNumber"16@0:8 *notificationObserver;
    NSNumber"16@0:8 *didPresentMarketingPage;
}

/* instance methods */
- (id)scribe;
- (id)scribePage;
- (id)scribeSection;
- (id)scribeComponent;
- (void)errorItemTapped:(id)tapped;
- (id)initWithFetcherItem:(id)item account:(id)account scribeContext:(id)context;
- (void)dealloc;
- (void)viewDidLoad;
- (void)update:(_Bool)update;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1SubscriptionManageTiersViewController_h */
