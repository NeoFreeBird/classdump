//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVFoundationAVPlayerObserverDelegate_Protocol_h
#define TAVFoundationAVPlayerObserverDelegate_Protocol_h
@import Foundation;

@protocol TAVFoundationAVPlayerObserverDelegate

@required

/* required instance methods */
- (void)handleDidPlayToEnd;
- (void)handlePlayerSnapshot:(id)snapshot;

@optional

@end

#endif /* TAVFoundationAVPlayerObserverDelegate_Protocol_h */
