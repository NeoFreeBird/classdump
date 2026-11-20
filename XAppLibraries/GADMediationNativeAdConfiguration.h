//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADMediationNativeAdConfiguration_h
#define GADMediationNativeAdConfiguration_h
@import Foundation;

#include "GADMediationAdConfiguration.h"

@class NSArray;

@interface GADMediationNativeAdConfiguration : GADMediationAdConfiguration

@property (readonly, nonatomic) NSArray *options;

/* instance methods */
- (id)initWithOptions:(id)options adConfiguration:(id)configuration targeting:(id)targeting credentials:(id)credentials extras:(id)extras;
- (id)initWithAdConfiguration:(id)configuration targeting:(id)targeting credentials:(id)credentials extras:(id)extras;

@end

#endif /* GADMediationNativeAdConfiguration_h */
