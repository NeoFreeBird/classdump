//
#ifndef TGFDetectionFilter_Protocol_h
#define TGFDetectionFilter_Protocol_h
@import Foundation;

#include "TGFFilter-Protocol.h"

@protocol TGFDetectionFilter <TGFFilter>

@required

@property (readonly, nonatomic) _Bool failureToDetectWillBehaveInert;

@optional

@end

#endif /* TGFDetectionFilter_Protocol_h */
