//
#ifndef _TtP10TFNUISwift39LegacySegmentedViewControllerDataSource__Protocol_h
#define _TtP10TFNUISwift39LegacySegmentedViewControllerDataSource__Protocol_h
@import Foundation;

@protocol TFNUISwift.LegacySegmentedViewControllerDataSource

@required

/* required instance methods */
- (long long)numberOfTabsIn:(id)in;
- (id)segmentedViewController:(id)controller pageViewControllerAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller descriptorAtIndex:(long long)index;

@optional

/* optional instance methods */
- (id)segmentedViewController:(id)controller tabGroupAtIndex:(long long)index;
- (id)segmentedViewController:(id)controller menuForTabAtIndex:(long long)index;
- (id)cachedPageViewControllersIn:(id)in;
- (_Bool)segmentedViewController:(id)controller isPrewarmableTabAtIndex:(long long)index;
- (_Bool)segmentedViewController:(id)controller isUnreadIndicatorTabAtIndex:(long long)index;

@end

#endif /* _TtP10TFNUISwift39LegacySegmentedViewControllerDataSource__Protocol_h */
