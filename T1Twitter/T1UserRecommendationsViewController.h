//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1UserRecommendationsViewController_h
#define T1UserRecommendationsViewController_h
@import Foundation;

@class NSString, TFNItemsDataViewController;

@interface T1UserRecommendationsViewController : TFNItemsDataViewController { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *style;
    NSNumber"16@0:8 *loadingState;
    NSNumber"16@0:8 *$__lazy_storage_$_recommendationRequestFailedItem;
    NSNumber"16@0:8 *$__lazy_storage_$_activityIndicatorItem;
    NSNumber"16@0:8 *$__lazy_storage_$_noRecommendationsItem;
    NSNumber"16@0:8 *replenishNotificationObservers;
    NSNumber"16@0:8 *recommendationsScheduledForReplenish;
}

@property (nonatomic, copy) NSString *replenishDisplayLocation;

/* instance methods */
- (id)initWithAccount:(id)account userID:(long long)id;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (id)scribe;
- (id)scribePage;
- (id)scribeImpressionParameters;
- (id)scribeContextForIndexPath:(id)path;
- (void)dealloc;
- (id)initWithCollectionViewLayout:(id)layout isDiffableDataSourcesEnabled:(_Bool)enabled;
- (id)initWithCollectionViewLayout:(id)layout;

@end

#endif /* T1UserRecommendationsViewController_h */
