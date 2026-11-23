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
