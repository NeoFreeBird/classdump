//
#ifndef GADMediationBannerAdConfiguration_h
#define GADMediationBannerAdConfiguration_h
@import Foundation;

#include "GADMediationAdConfiguration.h"

@interface GADMediationBannerAdConfiguration : GADMediationAdConfiguration

@property (readonly, nonatomic) struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; } adSize;

/* instance methods */
- (id)initWithAdSize:(struct GADAdSize { struct CGSize { double x0; double x1; } x0; unsigned long long x1; })size adConfiguration:(id)configuration targeting:(id)targeting credentials:(id)credentials extras:(id)extras;
- (id)initWithAdConfiguration:(id)configuration targeting:(id)targeting credentials:(id)credentials extras:(id)extras;

@end

#endif /* GADMediationBannerAdConfiguration_h */
