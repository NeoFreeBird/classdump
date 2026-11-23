//
#ifndef _TtC33TwitterListsFeatureImplementation33TwitterListsFeatureImplementation_h
#define _TtC33TwitterListsFeatureImplementation33TwitterListsFeatureImplementation_h
@import Foundation;

#include "_TtP12TwitterLists23TwitterListsFeatureObjC_-Protocol.h"

@class NSObject, NSString, _$sSS;

@interface TwitterListsFeatureImplementation.TwitterListsFeatureImplementation : NSObject <TwitterLists.TwitterListsFeatureObjC> // (Swift)

@property (nonatomic, readonly) NSString *identifier;

/* instance methods */
- (void)removedAccountWithAccountID:(id)id;
- (id)accountScopedFeatureWithAccountContext:(id)context;
- (id)createAndEditListViewControllerWithAccount:(id)account;
- (id)listsDiscoveryContainerViewControllerWithAccount:(id)account;
- (id)listManagementContainerViewControllerWithAccount:(id)account;
- (id)listDetailsViewControllerWithAccount:(id)account listID:(long long)id acceptCachedRepresentation:(_Bool)representation;
- (id)listManageMembersScrollingSegmentedViewControllerWithAccount:(id)account listID:(long long)id acceptCachedRepresentation:(_Bool)representation initiallySelectedTabIndex:(long long)index;
- (id)init;

@end

#endif /* _TtC33TwitterListsFeatureImplementation33TwitterListsFeatureImplementation_h */
