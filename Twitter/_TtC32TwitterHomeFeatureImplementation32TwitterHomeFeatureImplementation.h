//
#ifndef _TtC32TwitterHomeFeatureImplementation32TwitterHomeFeatureImplementation_h
#define _TtC32TwitterHomeFeatureImplementation32TwitterHomeFeatureImplementation_h
@import Foundation;

#include "TFNTwitterHomeFeature-Protocol.h"
#include "_TtP11TwitterHome22TwitterHomeFeatureObjC_-Protocol.h"

@class NSString, _$sSS, _TtCs12_SwiftObject;

@interface TwitterHomeFeatureImplementation.TwitterHomeFeatureImplementation : Swift._SwiftObject <TwitterHome.TwitterHomeFeatureObjC, TFNTwitterHomeFeature> // (Swift)

@property (nonatomic, readonly) NSString *identifier;

/* instance methods */
- (id)homeFeaturesConfigurationWithAccount:(id)account networkQualityProvider:(id)provider timelineVariant:(long long)variant;
- (id)homeTimelineContainerViewControllerWithAccount:(id)account homeTimeline:(id)timeline countryFilteredTimeline:(id)timeline latestTimeline:(id)timeline rankedFollowingTimeline:(id)timeline titleViewPlugins:(id)plugins barButtonItemPlugins:(id)plugins;
- (id)homeTimelineItemsViewControllerWithAccount:(id)account timeline:(id)timeline;
- (id)urtHomeTimelineStreamFactoryWithApplicationLink:(id)link homeConfiguration:(id)configuration;
- (id)pinnedTimelinesRepositoryWithAccount:(id)account;
- (id)pinnedTimelineViewControllerWithAccount:(id)account pinnedTimeline:(id)timeline;
- (id)editPinnedTimelinesViewControllerWithAccount:(id)account;
- (id)tabManagementSheetViewControllerWithAccount:(id)account scribePage:(id)page scribeSection:(id)section;
- (id)accountScopedFeatureWithAccountContext:(id)context;
- (void)removedAccountWithAccountID:(id)id;
- (id)timelineManagerProvider;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation32TwitterHomeFeatureImplementation_h */
