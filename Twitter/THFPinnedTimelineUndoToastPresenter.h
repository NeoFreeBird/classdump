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
