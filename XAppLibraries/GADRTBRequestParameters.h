//
#ifndef GADRTBRequestParameters_h
#define GADRTBRequestParameters_h
@import Foundation;

#include "GADAdNetworkExtras-Protocol.h"
#include "GADRTBMediationSignalsConfiguration.h"

@class NSObject;

@interface GADRTBRequestParameters : NSObject

@property (readonly, nonatomic) GADRTBMediationSignalsConfiguration *configuration;
@property (readonly, nonatomic) id <GADAdNetworkExtras> extras;
@property (readonly, nonatomic) struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; } adSize;

/* instance methods */
- (id)initWithTargeting:(id)targeting RTBAdapter:(id)rtbadapter;

@end

#endif /* GADRTBRequestParameters_h */
