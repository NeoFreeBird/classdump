//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
