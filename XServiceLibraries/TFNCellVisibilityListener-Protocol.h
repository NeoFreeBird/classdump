//
#ifndef TFNCellVisibilityListener_Protocol_h
#define TFNCellVisibilityListener_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNCellVisibilityListener <NSObject>

@required

@optional

/* optional instance methods */
- (void)cellWillDisplay:(id)display inDataViewController:(id)controller;
- (void)cellDidDisplay:(id)display inDataViewController:(id)controller withVisibilityPercentage:(double)percentage visibilityState:(unsigned long long)state;
- (void)cellWillEndDisplaying:(id)displaying inDataViewController:(id)controller;
- (void)cellDidEndDisplaying:(id)displaying inDataViewController:(id)controller reason:(unsigned long long)reason;
- (void)cellDidEndDisplayingFromViewport:(id)viewport inDataViewController:(id)controller;

@end

#endif /* TFNCellVisibilityListener_Protocol_h */
