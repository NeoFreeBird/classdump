//
#ifndef TGFCoreImageKernelFilterBase_h
#define TGFCoreImageKernelFilterBase_h
@import Foundation;

#include "TGFFilter-Protocol.h"

@class CIKernel, NSObject, NSString;

@interface TGFCoreImageKernelFilterBase : NSObject <TGFFilter> {
    /* instance variables */
    CIKernel *_kernel;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) float minAdjustmentValue;
@property (readonly, nonatomic) float maxAdjustmentValue;
@property (readonly, nonatomic) float defaultAdjustmentValue;
@property (readonly, nonatomic) float inertAdjustmentValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)metalFunctionName;
- (id)init;
- (void)apply:(id)apply;
- (_Bool)isSupportedOnCurrentDevice;
- (id)kernelArguments:(id)arguments;
- (float)kernelAdjustmentValueForFilterAdjustmentValue:(float)value;

@end

#endif /* TGFCoreImageKernelFilterBase_h */
