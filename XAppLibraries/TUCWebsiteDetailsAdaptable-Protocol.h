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
