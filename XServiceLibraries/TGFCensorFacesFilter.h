//
#ifndef TGFCensorFacesFilter_h
#define TGFCensorFacesFilter_h
@import Foundation;

#include "TGFDetectionFilter-Protocol.h"

@class NSObject, NSString;

@interface TGFCensorFacesFilter : NSObject <TGFDetectionFilter>

@property (readonly, nonatomic) _Bool failureToDetectWillBehaveInert;
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
- (void)apply:(id)apply;

@end

#endif /* TGFCensorFacesFilter_h */
