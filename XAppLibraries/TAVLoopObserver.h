//
#ifndef TAVLoopObserver_h
#define TAVLoopObserver_h
@import Foundation;

#include "TAVPlaybackObserver-Protocol.h"
#include "TAVPlaybackState.h"

@class NSObject;

@interface TAVLoopObserver : NSObject <TAVPlaybackObserver>

@property (copy, nonatomic) id /* block */ loopCallback;
@property (copy, nonatomic) TAVPlaybackState *previousState;
@property (nonatomic) long long loopCount;

/* instance methods */
- (id)initWithLoopCallback:(id /* block */)callback;
- (void)player:(id)player didUpdatePlaybackState:(id)state;

@end

#endif /* TAVLoopObserver_h */
