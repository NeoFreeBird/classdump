//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVPipelineOwner_Protocol_h
#define PTVPipelineOwner_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "PTVPublishingPipeline.h"

@protocol PTVPipelineOwner <NSObject>

@required

@property (readonly) PTVPublishingPipeline *sourcePipeline;
@property (readonly) PTVPublishingPipeline *sourcePipelineIfLoaded;

@optional

@end

#endif /* PTVPipelineOwner_Protocol_h */
