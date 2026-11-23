//
#ifndef TFNTwitterLivePipelineServiceProvider_h
#define TFNTwitterLivePipelineServiceProvider_h
@import Foundation;

#include "TFSTwitterLivePipelineServiceProvider-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterLivePipelineServiceProvider : NSObject <TFSTwitterLivePipelineServiceProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)livePipelineServiceWithTwitterAPI:(id)api;

@end

#endif /* TFNTwitterLivePipelineServiceProvider_h */
