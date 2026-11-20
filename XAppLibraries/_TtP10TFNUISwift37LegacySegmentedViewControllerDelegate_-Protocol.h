//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP10TFNUISwift37LegacySegmentedViewControllerDelegate__Protocol_h
#define _TtP10TFNUISwift37LegacySegmentedViewControllerDelegate__Protocol_h
@import Foundation;

@protocol TFNUISwift.LegacySegmentedViewControllerDelegate

@required

@optional

/* optional instance methods */
- (void)segmentedViewController:(id)controller willSelectViewController:(id)controller atIndex:(long long)index indexChanged:(_Bool)changed;
- (void)segmentedViewController:(id)controller didSelectViewController:(id)controller atIndex:(long long)index previousIndex:(long long)index trigger:(long long)trigger;
- (void)segmentedViewController:(id)controller mayBeginDisplayingPageAt:(long long)at viewController:(id)controller;
- (_Bool)segmentedViewController:(id)controller shouldSelectViewControllerAtIndex:(long long)index;
- (void)segmentedViewController:(id)controller didTapTabAtIndex:(long long)index;
- (void)segmentedViewController:(id)controller didLongPressAtIndex:(long long)index;
- (void)segmentedViewController:(id)controller didScrollToFractionalIndex:(double)index;
- (void)segmentedViewController:(id)controller didSelectInnerTabAtGroupIndex:(long long)index innerIndex:(long long)index;

@end

#endif /* _TtP10TFNUISwift37LegacySegmentedViewControllerDelegate__Protocol_h */
