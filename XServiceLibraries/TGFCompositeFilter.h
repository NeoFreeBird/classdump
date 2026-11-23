//
#ifndef TGFCompositeFilter_h
#define TGFCompositeFilter_h
@import Foundation;

#include "TGFFilter-Protocol.h"

@class NSArray, NSObject, NSString;

@interface TGFCompositeFilter : NSObject <TGFFilter>

@property (readonly, copy, nonatomic) NSArray *filters;
@property (readonly, copy, nonatomic) NSArray *adjustments;
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
- (id)initWithIdentifier:(id)identifier sourceFiltersEnumerator:(id)enumerator data:(id)data;
- (id)initWithIdentifier:(id)identifier sourceFilters:(id)filters data:(id)data;
- (id)dataRepresentation;
- (id)initWithIdentifier:(id)identifier filters:(id)filters adjustments:(id)adjustments;
- (id)initWithIdentifierAndFiltersWithAdjustments:(id)adjustments arguments:(char *)arguments;
- (id)initWithIdentifierAndFiltersWithAdjustments:(id)adjustments;
- (void)apply:(id)apply;
- (_Bool)isSupportedOnCurrentDevice;

@end

#endif /* TGFCompositeFilter_h */
