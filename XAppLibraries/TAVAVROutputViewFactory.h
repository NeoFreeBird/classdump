//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAVAVROutputViewFactory_h
#define TAVAVROutputViewFactory_h
@import Foundation;

#include "TAVPlayerOutputViewFactory-Protocol.h"

@class NSDictionary, NSObject;

@interface TAVAVROutputViewFactory : NSObject <TAVPlayerOutputViewFactory> { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 renderTechnology;
    @40@0:8:16@24@32 observer;
    @40@0:8:16@24@32 outputViewCornerRadius;
    @40@0:8:16@24@32 outputViewBorderWidth;
    @40@0:8:16@24@32 outputViewBorderColor;
    @40@0:8:16@24@32 frameProcessor;
}

@property (nonatomic) _Bool productsRequirePixelBufferSource;
@property (nonatomic, copy) NSDictionary *pixelBufferAttributes;

/* instance methods */
- (id)init;
- (id)playerOutputView;

@end

#endif /* TAVAVROutputViewFactory_h */
