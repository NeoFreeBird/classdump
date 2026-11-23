//
#ifndef TIPDisabledProgressiveLoadingPolicy_h
#define TIPDisabledProgressiveLoadingPolicy_h
@import Foundation;

#include "TIPImageFetchProgressiveLoadingPolicy-Protocol.h"

@class NSObject, NSString;

@interface TIPDisabledProgressiveLoadingPolicy : NSObject <TIPImageFetchProgressiveLoadingPolicy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (long long)tip_imageFetchOperation:(id)operation behaviorForProgress:(long long)progress frameCount:(unsigned long long)count progress:(float)progress type:(id)type dimensions:(struct CGSize { double x0; double x1; })dimensions renderCount:(unsigned long long)count;

@end

#endif /* TIPDisabledProgressiveLoadingPolicy_h */
