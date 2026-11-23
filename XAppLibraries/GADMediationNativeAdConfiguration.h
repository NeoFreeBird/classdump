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
