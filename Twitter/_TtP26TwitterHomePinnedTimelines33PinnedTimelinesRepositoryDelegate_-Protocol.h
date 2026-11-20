//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
