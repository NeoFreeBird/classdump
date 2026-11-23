//
#ifndef TGFFilter_Protocol_h
#define TGFFilter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSString;

@protocol TGFFilter <NSObject>

@required

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) float minAdjustmentValue;
@property (readonly, nonatomic) float maxAdjustmentValue;
@property (readonly, nonatomic) float defaultAdjustmentValue;
@property (readonly, nonatomic) float inertAdjustmentValue;

/* required instance methods */
- (void)apply:(id)apply;

@optional

/* optional instance methods */
- (_Bool)isSupportedOnCurrentDevice;

@end

#endif /* TGFFilter_Protocol_h */
