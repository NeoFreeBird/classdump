//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef THFPinnedTimelineUndoToastPresenter_h
#define THFPinnedTimelineUndoToastPresenter_h
@import Foundation;

@class NSObject;

@interface THFPinnedTimelineUndoToastPresenter : NSObject // (Swift)

/* class methods */
+ (void)showUnpinUndoToastWithTimeline:(id)timeline repository:(id)repository;

/* instance methods */
- (id)init;

@end

#endif /* THFPinnedTimelineUndoToastPresenter_h */
