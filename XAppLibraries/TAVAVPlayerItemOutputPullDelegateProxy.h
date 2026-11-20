//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAVPlayerItemOutputPullDelegateProxy_h
#define TAVAVPlayerItemOutputPullDelegateProxy_h
@import Foundation;

#include "AVPlayerItemOutputPullDelegate-Protocol.h"

@class NSObject, NSString;

@interface TAVAVPlayerItemOutputPullDelegateProxy : NSObject <AVPlayerItemOutputPullDelegate>

@property (weak, nonatomic) id <AVPlayerItemOutputPullDelegate> proxyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithProxyDelegate:(id)delegate;
- (void)outputSequenceWasFlushed:(id)flushed;
- (void)outputMediaDataWillChange:(id)change;

@end

#endif /* TAVAVPlayerItemOutputPullDelegateProxy_h */
