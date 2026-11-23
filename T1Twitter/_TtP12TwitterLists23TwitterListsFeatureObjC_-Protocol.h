//
#ifndef _TtP12TwitterLists23TwitterListsFeatureObjC__Protocol_h
#define _TtP12TwitterLists23TwitterListsFeatureObjC__Protocol_h
@import Foundation;

#include "TFSTwitterFeature-Protocol.h"

@protocol TwitterLists.TwitterListsFeatureObjC <TFSTwitterFeature>

@required

/* required instance methods */
- (id)createAndEditListViewControllerWithAccount:(id)account;
- (id)listsDiscoveryContainerViewControllerWithAccount:(id)account;
- (id)listManagementContainerViewControllerWithAccount:(id)account;
- (id)listDetailsViewControllerWithAccount:(id)account listID:(long long)id acceptCachedRepresentation:(_Bool)representation;
- (id)listManageMembersScrollingSegmentedViewControllerWithAccount:(id)account listID:(long long)id acceptCachedRepresentation:(_Bool)representation initiallySelectedTabIndex:(long long)index;

@optional

@end

#endif /* _TtP12TwitterLists23TwitterListsFeatureObjC__Protocol_h */
