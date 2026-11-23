//
#ifndef TAETFNUIConfiguration_h
#define TAETFNUIConfiguration_h
@import Foundation;

#include "TFNUIConfiguration.h"

@interface TAETFNUIConfiguration : TFNUIConfiguration

/* class methods */
+ (void)setAdditionalVectorImageSearchDirectoryURLs:(id)urls;
+ (id)defaultVectorImageSearchDirectoryURLs;
+ (void)configureVectorImages;
+ (id)tae_resourceBundle;

/* instance methods */
- (void)setupAppearance;
- (void)didCreateWindow:(id)window;
- (id)colorPalette;

@end

#endif /* TAETFNUIConfiguration_h */
