//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TGFSimpleColorCubeFilter_h
#define TGFSimpleColorCubeFilter_h
@import Foundation;

#include "TGFCoreImageColorCubeFilterBase.h"

@class NSString;

@interface TGFSimpleColorCubeFilter : TGFCoreImageColorCubeFilterBase {
    /* instance variables */
    NSString *_ccid;
    NSString *_filterId;
    _Bool _supportsDissolving;
}

/* instance methods */
- (id)colorCubeIdentifier;
- (id)identifier;
- (_Bool)supportsDissolving;
- (id)initWithColorCubeIdentifier:(id)identifier filterIdentifier:(id)identifier supportsDissolving:(_Bool)dissolving colorSpace:(struct CGColorSpace *)space;

@end

#endif /* TGFSimpleColorCubeFilter_h */
