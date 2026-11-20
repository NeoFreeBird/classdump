//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TIPGlobalConfiguration_T1ImagePipelineService_h
#define TIPGlobalConfiguration_T1ImagePipelineService_h
@import Foundation;

#include "T1ImagePipelineLoadSourceEventAdapter.h"
#include "T1ImagePipelineLoadSourceEventObserver-Protocol.h"
#include "T1ImagePipelineServiceConfiguration-Protocol.h"
#include "T1ImagePipelineServicePipelineFactory-Protocol.h"

@class NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface TIPGlobalConfiguration (T1ImagePipelineService) <T1ImagePipelineServiceConfiguration>

@end

#endif /* TIPGlobalConfiguration_T1ImagePipelineService_h */
