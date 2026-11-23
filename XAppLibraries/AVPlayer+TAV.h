//
#ifndef AVPlayer_TAV_h
#define AVPlayer_TAV_h
@import Foundation;

@interface AVPlayer (TAV)

/* instance methods */
- (long long)tav_timeControlStatus;
- (id)tav_reasonForWaitingToPlay;

@end

#endif /* AVPlayer_TAV_h */
