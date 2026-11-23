//
#ifndef TGFFilterRenderContext_h
#define TGFFilterRenderContext_h
@import Foundation;

#include "TGFExecuteContext.h"

@class CIContext, CIImage, NSObject, UIImage;

@interface TGFFilterRenderContext : NSObject {
    /* instance variables */
    TGFExecuteContext *_context;
    unsigned long long _prepCount;
}

@property (readonly, nonatomic) UIImage *originalImage;
@property (readonly, nonatomic) CIImage *originalCIImage;
@property (readonly, nonatomic) _Bool hasWideGamutColor;
@property (readonly, nonatomic) CIContext *coreImageContext;
@property (readonly, nonatomic) CIImage *inputCIImage;
@property (readonly, nonatomic) float inputAdjustment;
@property (retain, nonatomic) CIImage *outputCIImage;

/* instance methods */

@end

#endif /* TGFFilterRenderContext_h */
