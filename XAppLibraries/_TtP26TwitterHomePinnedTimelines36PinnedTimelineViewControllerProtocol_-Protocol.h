//
#ifndef _TtP26TwitterHomePinnedTimelines36PinnedTimelineViewControllerProtocol__Protocol_h
#define _TtP26TwitterHomePinnedTimelines36PinnedTimelineViewControllerProtocol__Protocol_h
@import Foundation;

#include "_TtC26TwitterHomePinnedTimelines23PinnedTimelineDataModel.h"

@class UIScrollView;

@protocol TwitterHomePinnedTimelines.PinnedTimelineViewControllerProtocol

@required

@property (nonatomic, readonly) TwitterHomePinnedTimelines.PinnedTimelineDataModel *pinnedTimeline;
@property (nonatomic, readonly) _Bool hasUnreadContent;
@property (nonatomic, readonly) UIScrollView *contentScrollView;

/* required instance methods */
- (void)loadTop:(id)top;
- (void)reloadTop:(id)top;
- (void)beginPullToRefresh;
- (_Bool)tfn_isScrolledToTop;

@optional

@end

#endif /* _TtP26TwitterHomePinnedTimelines36PinnedTimelineViewControllerProtocol__Protocol_h */
