//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
