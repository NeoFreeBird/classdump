//
#ifndef TGFCoreImageColorCubeFilterBase_h
#define TGFCoreImageColorCubeFilterBase_h
@import Foundation;

#include "TGFFilter-Protocol.h"

@class NSObject, NSString;

@interface TGFCoreImageColorCubeFilterBase : NSObject <TGFFilter>

@property (readonly, nonatomic) struct CGColorSpace * colorSpace;
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
- (id)initWithColorSpace:(struct CGColorSpace *)space;
- (id)init;
- (id)colorCubeIdentifier;
- (_Bool)supportsDissolving;
- (void)apply:(id)apply;

@end

#endif /* TGFCoreImageColorCubeFilterBase_h */
