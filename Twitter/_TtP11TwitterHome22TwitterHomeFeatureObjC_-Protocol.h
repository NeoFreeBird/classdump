//
#ifndef _TtP11TwitterHome22TwitterHomeFeatureObjC__Protocol_h
#define _TtP11TwitterHome22TwitterHomeFeatureObjC__Protocol_h
@import Foundation;

#include "TFSTwitterFeature-Protocol.h"

@protocol TwitterHome.TwitterHomeFeatureObjC <TFSTwitterFeature>

@required

/* required instance methods */
- (id)homeFeaturesConfigurationWithAccount:(id)account networkQualityProvider:(id)provider timelineVariant:(long long)variant;
- (id)homeTimelineContainerViewControllerWithAccount:(id)account homeTimeline:(id)timeline countryFilteredTimeline:(id)timeline latestTimeline:(id)timeline rankedFollowingTimeline:(id)timeline titleViewPlugins:(id)plugins barButtonItemPlugins:(id)plugins;
- (id)homeTimelineItemsViewControllerWithAccount:(id)account timeline:(id)timeline;
- (id)urtHomeTimelineStreamFactoryWithApplicationLink:(id)link homeConfiguration:(id)configuration;
- (id)pinnedTimelinesRepositoryWithAccount:(id)account;
- (id)pinnedTimelineViewControllerWithAccount:(id)account pinnedTimeline:(id)timeline;
- (id)editPinnedTimelinesViewControllerWithAccount:(id)account;
- (id)tabManagementSheetViewControllerWithAccount:(id)account scribePage:(id)page scribeSection:(id)section;

@optional

@end

#endif /* _TtP11TwitterHome22TwitterHomeFeatureObjC__Protocol_h */
