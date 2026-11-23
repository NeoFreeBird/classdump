//
#ifndef T1UsersViewController_h
#define T1UsersViewController_h
@import Foundation;

#include "T1UserOrRecommendationTableRowAdapter.h"
#include "T1UserOrRecommendationTableRowAdapterDelegate-Protocol.h"

@class NSArray, NSString, TFNActivityIndicatorItem, TFNActivityIndicatorItemDataViewAdapter, TFNEmptyStateConfiguration, TFNItemsDataViewController, TFNTwitterAccount, TFSTwitterScribeContext;

@interface T1UsersViewController : TFNItemsDataViewController <T1UserOrRecommendationTableRowAdapterDelegate>

@property (retain, nonatomic) T1UserOrRecommendationTableRowAdapter *userRowAdapter;
@property (retain, nonatomic) TFNActivityIndicatorItem *activityIndicatorItem;
@property (retain, nonatomic) TFNActivityIndicatorItemDataViewAdapter *activityIndicatorAdapter;
@property (retain, nonatomic) TFNEmptyStateConfiguration *noUsersEmptyStateConfiguration;
@property (retain, nonatomic) TFNEmptyStateConfiguration *userRequestFailedEmptyStateConfiguration;
@property (nonatomic) long long loadingState;
@property (readonly, nonatomic) TFNTwitterAccount *account;
@property (retain, nonatomic) NSArray *userIDs;
@property (nonatomic) long long userCellStyle;
@property (nonatomic) unsigned long long userFollowControlType;
@property (copy, nonatomic) NSString *scribePage;
@property (copy, nonatomic) TFSTwitterScribeContext *sourceScribeContext;
@property (readonly, nonatomic) NSArray *users;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithAccount:(id)account;
- (id)init;
- (id)initWithCollectionViewLayout:(id)layout;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)appear;
- (void)update:(_Bool)update;
- (struct CGSize { double x0; double x1; })_t1_sizeForPopover;
- (void)_t1_requestUsers;
- (void)_t1_receiveUsers:(id)users;
- (void)_t1_updateRelationshipsForUsers:(id)users;
- (_Bool)userRowAdapter:(id)adapter shouldShowBioForUserReference:(id)reference;
- (id)scribe;
- (id)scribeContextForIndexPath:(id)path;
- (void)_t1_logImpression;

@end

#endif /* T1UsersViewController_h */
