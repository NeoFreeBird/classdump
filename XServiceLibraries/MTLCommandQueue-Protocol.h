//
#ifndef MTLCommandQueue_Protocol_h
#define MTLCommandQueue_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;
@protocol MTLDevice;

@protocol MTLCommandQueue <NSObject>

@required

@property (nonatomic, copy) NSString *label;
@property (nonatomic, readonly) id <MTLDevice> device;

/* required instance methods */
- (id)commandBuffer;
- (id)commandBuffer;
- (id)commandBufferWithDescriptor:(id)descriptor;
- (id)commandBufferWithDescriptor:(id)descriptor;
- (id)commandBufferWithUnretainedReferences;
- (id)commandBufferWithUnretainedReferences;
- (void)insertDebugCaptureBoundary;
- (void)addResidencySet:(id)set;
- (void)addResidencySets:(const id *)sets count:(unsigned long long)count;
- (void)removeResidencySet:(id)set;
- (void)removeResidencySets:(const id *)sets count:(unsigned long long)count;

@optional

@end

#endif /* MTLCommandQueue_Protocol_h */
