//
#ifndef TFNCellVisibilityWeakRelay_h
#define TFNCellVisibilityWeakRelay_h
@import Foundation;

#include "TFNCellVisibilityListener-Protocol.h"

@class NSObject, NSString;

@interface TFNCellVisibilityWeakRelay : NSObject <TFNCellVisibilityListener>

@property (weak, nonatomic) id <TFNCellVisibilityListener> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (void)cellWillDisplay:(id)display inDataViewController:(id)controller;
- (void)cellDidDisplay:(id)display inDataViewController:(id)controller withVisibilityPercentage:(double)percentage visibilityState:(unsigned long long)state;
- (void)cellWillEndDisplaying:(id)displaying inDataViewController:(id)controller;
- (void)cellDidEndDisplaying:(id)displaying inDataViewController:(id)controller reason:(unsigned long long)reason;
- (void)cellDidEndDisplayingFromViewport:(id)viewport inDataViewController:(id)controller;

@end

#endif /* TFNCellVisibilityWeakRelay_h */
