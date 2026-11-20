//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPWrapperProgressiveLoadingPolicy_h
#define TIPWrapperProgressiveLoadingPolicy_h
@import Foundation;

#include "TIPImageFetchProgressiveLoadingPolicy-Protocol.h"

@class NSObject, NSString;

@interface TIPWrapperProgressiveLoadingPolicy : NSObject <TIPImageFetchProgressiveLoadingPolicy>

@property (readonly, weak, nonatomic) id <TIPImageFetchProgressiveLoadingPolicy> wrappedPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)init;
- (id)initWithProgressiveLoadingPolicy:(id)policy;
- (long long)tip_imageFetchOperation:(id)operation behaviorForProgress:(long long)progress frameCount:(unsigned long long)count progress:(float)progress type:(id)type dimensions:(struct CGSize { double x0; double x1; })dimensions renderCount:(unsigned long long)count;

@end

#endif /* TIPWrapperProgressiveLoadingPolicy_h */
