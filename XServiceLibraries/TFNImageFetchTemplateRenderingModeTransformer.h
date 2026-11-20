//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNImageFetchTemplateRenderingModeTransformer_h
#define TFNImageFetchTemplateRenderingModeTransformer_h
@import Foundation;

#include "TIPImageFetchTransformer-Protocol.h"

@class NSObject, NSString;

@interface TFNImageFetchTemplateRenderingModeTransformer : NSObject <TIPImageFetchTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedInstance;

/* instance methods */
- (id)tip_transformImage:(id)image withProgress:(float)progress hintTargetDimensions:(struct CGSize { double x0; double x1; })dimensions hintTargetContentMode:(long long)mode forImageFetchOperation:(id)operation;
- (id)tip_transformerIdentifier;

@end

#endif /* TFNImageFetchTemplateRenderingModeTransformer_h */
