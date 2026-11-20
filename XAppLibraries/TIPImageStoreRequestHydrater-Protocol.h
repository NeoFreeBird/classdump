//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPImageStoreRequestHydrater_Protocol_h
#define TIPImageStoreRequestHydrater_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageStoreRequestHydrater <NSObject>

@required

/* required instance methods */
- (void)tip_hydrateImageStoreRequest:(id)request imagePipeline:(id)pipeline completion:(id /* block */)completion;

@optional

@end

#endif /* TIPImageStoreRequestHydrater_Protocol_h */
