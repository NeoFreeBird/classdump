//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TGFDesaturationFilter_h
#define TGFDesaturationFilter_h
@import Foundation;

#include "TGFFilter-Protocol.h"

@class NSObject, NSString;

@interface TGFDesaturationFilter : NSObject <TGFFilter>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) float minAdjustmentValue;
@property (readonly, nonatomic) float maxAdjustmentValue;
@property (readonly, nonatomic) float defaultAdjustmentValue;
@property (readonly, nonatomic) float inertAdjustmentValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)blackAndWhiteFilter;
+ (id)invertColorsFilter;

/* instance methods */
- (id)initWithIdentifier:(id)identifier maxAdjustmentValue:(float)value;
- (void)apply:(id)apply;

@end

#endif /* TGFDesaturationFilter_h */
