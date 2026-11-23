//
#ifndef _TtP26TwitterHomePinnedTimelines33PinnedTimelinesRepositoryDelegate__Protocol_h
#define _TtP26TwitterHomePinnedTimelines33PinnedTimelinesRepositoryDelegate__Protocol_h
@import Foundation;

@protocol TwitterHomePinnedTimelines.PinnedTimelinesRepositoryDelegate

@required

/* required instance methods */
- (void)pinnedTimelinesRepository:(id)repository didChangeWithPinnedTimelineModels:(id)models;

@optional

@end

#endif /* _TtP26TwitterHomePinnedTimelines33PinnedTimelinesRepositoryDelegate__Protocol_h */
