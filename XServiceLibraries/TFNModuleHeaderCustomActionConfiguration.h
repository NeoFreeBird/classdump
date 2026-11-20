//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNModuleHeaderCustomActionConfiguration_h
#define TFNModuleHeaderCustomActionConfiguration_h
@import Foundation;

#include "TFNModuleHeaderActionConfiguration.h"

@interface TFNModuleHeaderCustomActionConfiguration : TFNModuleHeaderActionConfiguration

/* class methods */
+ (id)configurationForViewProvider:(id /* block */)provider;

/* instance methods */
- (id)initWithViewProvider:(id /* block */)provider;
- (struct CGSize { double x0; double x1; })_tfn_intrinsicContentSize;

@end

#endif /* TFNModuleHeaderCustomActionConfiguration_h */
