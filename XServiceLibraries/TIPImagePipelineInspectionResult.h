//
#ifndef TIPImagePipelineInspectionResult_h
#define TIPImagePipelineInspectionResult_h
@import Foundation;

#include "TIPImagePipeline.h"

@class NSArray, NSObject;

@interface TIPImagePipelineInspectionResult : NSObject

@property (readonly, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) NSArray *completeRenderedEntries;
@property (readonly, nonatomic) NSArray *completeMemoryEntries;
@property (readonly, nonatomic) NSArray *completeDiskEntries;
@property (readonly, nonatomic) NSArray *partialMemoryEntries;
@property (readonly, nonatomic) NSArray *partialDiskEntries;
@property (readonly, nonatomic) unsigned long long inMemoryBytesUsed;
@property (readonly, nonatomic) unsigned long long onDiskBytesUsed;

/* instance methods */

@end

#endif /* TIPImagePipelineInspectionResult_h */
