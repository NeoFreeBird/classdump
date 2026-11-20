//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TUCWebsiteDetailsAdaptable_Protocol_h
#define TUCWebsiteDetailsAdaptable_Protocol_h
@import Foundation;

#include "TUCDPAProductMetadata.h"
#include "TUCExperimentWebsiteFormatCTASettings.h"

@protocol TUCWebsiteDetailsAdaptable

@required

@property (readonly, nonatomic) TUCExperimentWebsiteFormatCTASettings *websiteFormatSettings;
@property (readonly, nonatomic) TUCDPAProductMetadata *dpaProductMetadata;

@optional

@end

#endif /* TUCWebsiteDetailsAdaptable_Protocol_h */
