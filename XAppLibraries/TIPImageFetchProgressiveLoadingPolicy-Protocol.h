//
#ifndef TIPImageFetchProgressiveLoadingPolicy_Protocol_h
#define TIPImageFetchProgressiveLoadingPolicy_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageFetchProgressiveLoadingPolicy <NSObject>

@required

/* required instance methods */
- (long long)tip_imageFetchOperation:(id)operation behaviorForProgress:(long long)progress frameCount:(unsigned long long)count progress:(float)progress type:(id)type dimensions:(struct CGSize { double x0; double x1; })dimensions renderCount:(unsigned long long)count;

@optional

@end

#endif /* TIPImageFetchProgressiveLoadingPolicy_Protocol_h */
