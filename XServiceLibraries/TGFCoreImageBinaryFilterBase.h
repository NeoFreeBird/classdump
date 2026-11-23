//
#ifndef TGFCoreImageBinaryFilterBase_h
#define TGFCoreImageBinaryFilterBase_h
@import Foundation;

#include "TGFFilter-Protocol.h"

@class NSObject, NSString;

@interface TGFCoreImageBinaryFilterBase : NSObject <TGFFilter> {
    /* instance variables */
    NSString *_filterName;
    _Bool _canDissolve;
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
- (id)initWithIdentifier:(id)identifier CIFilterName:(id)name supportsDissolving:(_Bool)dissolving;
- (void)apply:(id)apply;

@end

#endif /* TGFCoreImageBinaryFilterBase_h */
