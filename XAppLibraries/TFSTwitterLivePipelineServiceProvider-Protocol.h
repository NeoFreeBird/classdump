//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterLivePipelineServiceProvider_Protocol_h
#define TFSTwitterLivePipelineServiceProvider_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFSTwitterLivePipelineServiceProvider <NSObject>

@required

/* required instance methods */
- (id)livePipelineServiceWithTwitterAPI:(id)api;

@optional

@end

#endif /* TFSTwitterLivePipelineServiceProvider_Protocol_h */
