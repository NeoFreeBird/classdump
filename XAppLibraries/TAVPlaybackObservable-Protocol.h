//
#ifndef TAVPlaybackObservable_Protocol_h
#define TAVPlaybackObservable_Protocol_h
@import Foundation;

#include "TAVPlaybackState.h"

@protocol TAVPlaybackObservable

@required

@property (nonatomic, readonly) TAVPlaybackState *playbackState;

/* required instance methods */
- (void)addPlaybackObserver:(id)observer;
- (void)addPlaybackObserver:(id)observer;
- (void)removePlaybackObserver:(id)observer;
- (void)removePlaybackObserver:(id)observer;

@optional

@end

#endif /* TAVPlaybackObservable_Protocol_h */
