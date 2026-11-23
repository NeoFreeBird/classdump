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
