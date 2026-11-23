//
#ifndef TGFCoreImageFilterBase_h
#define TGFCoreImageFilterBase_h
@import Foundation;

#include "TGFFilter-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TGFCoreImageFilterBase : NSObject <TGFFilter> {
    /* instance variables */
    NSArray *_filterNames;
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
- (id)initWithIdentifier:(id)identifier minAdjustmentValue:(float)value maxAdjustmentValue:(float)value defaultAdjustmentValue:(float)value intertAdjustmentValue:(float)value CIImageFilterNames:(id)names;
- (void)apply:(id)apply;
- (void)configureFilter:(id)filter atIndex:(unsigned long long)index adjustmentValue:(float)value renderContext:(id)context;

@end

#endif /* TGFCoreImageFilterBase_h */
