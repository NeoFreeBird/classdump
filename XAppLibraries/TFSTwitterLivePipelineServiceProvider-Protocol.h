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
