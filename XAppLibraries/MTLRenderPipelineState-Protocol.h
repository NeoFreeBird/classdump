//
#ifndef MTLRenderPipelineState_Protocol_h
#define MTLRenderPipelineState_Protocol_h
@import Foundation;

#include "MTLAllocation-Protocol.h"
#include "MTLDevice-Protocol.h"
#include "NSObject-Protocol.h"

@class MTLRenderPipelineReflection, NSString;

@protocol MTLRenderPipelineState <MTLAllocation, NSObject>

@required

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) id <MTLDevice> device;
@property (nonatomic, readonly) MTLRenderPipelineReflection *reflection;
@property (nonatomic, readonly) long long maxTotalThreadsPerThreadgroup;
@property (nonatomic, readonly) _Bool threadgroupSizeMatchesTileSize;
@property (nonatomic, readonly) long long imageblockSampleLength;
@property (nonatomic, readonly) _Bool supportIndirectCommandBuffers;
@property (nonatomic, readonly) long long maxTotalThreadsPerObjectThreadgroup;
@property (nonatomic, readonly) long long maxTotalThreadsPerMeshThreadgroup;
@property (nonatomic, readonly) long long objectThreadExecutionWidth;
@property (nonatomic, readonly) long long meshThreadExecutionWidth;
@property (nonatomic, readonly) long long maxTotalThreadgroupsPerMeshGrid;
@property (nonatomic, readonly) struct MTLResourceID { unsigned long long x0; } gpuResourceID;
@property (nonatomic, readonly) long long shaderValidation;
@property (nonatomic, readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } requiredThreadsPerTileThreadgroup;
@property (nonatomic, readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } requiredThreadsPerObjectThreadgroup;
@property (nonatomic, readonly) struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } requiredThreadsPerMeshThreadgroup;

/* required instance methods */
- (id)functionHandleWithName:(id)name stage:(unsigned long long)stage;
- (id)functionHandleWithName:(id)name stage:(unsigned long long)stage;
- (id)functionHandleWithBinaryFunction:(id)function stage:(unsigned long long)stage;
- (id)functionHandleWithBinaryFunction:(id)function stage:(unsigned long long)stage;
- (id)newRenderPipelineStateWithBinaryFunctions:(id)functions error:(id *)error;
- (id)newRenderPipelineStateWithBinaryFunctions:(id)functions error:(id *)error;
- (id)newRenderPipelineDescriptorForSpecialization;
- (id)newRenderPipelineDescriptorForSpecialization;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })dimensions;
- (unsigned long long)imageblockMemoryLengthForDimensions:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })dimensions;
- (id)functionHandleWithFunction:(id)function stage:(unsigned long long)stage;
- (id)functionHandleWithFunction:(id)function stage:(unsigned long long)stage;
- (id)newVisibleFunctionTableWithDescriptor:(id)descriptor stage:(unsigned long long)stage;
- (id)newVisibleFunctionTableWithDescriptor:(id)descriptor stage:(unsigned long long)stage;
- (id)newIntersectionFunctionTableWithDescriptor:(id)descriptor stage:(unsigned long long)stage;
- (id)newIntersectionFunctionTableWithDescriptor:(id)descriptor stage:(unsigned long long)stage;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)functions error:(id *)error;
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)functions error:(id *)error;

@optional

@end

#endif /* MTLRenderPipelineState_Protocol_h */
