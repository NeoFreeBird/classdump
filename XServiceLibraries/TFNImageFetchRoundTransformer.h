//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNImageFetchRoundTransformer_h
#define TFNImageFetchRoundTransformer_h
@import Foundation;

#include "TIPImageFetchTransformer-Protocol.h"

@class NSObject, NSString;

@interface TFNImageFetchRoundTransformer : NSObject <TIPImageFetchTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)tip_transformImage:(id)image withProgress:(float)progress hintTargetDimensions:(struct CGSize { double x0; double x1; })dimensions hintTargetContentMode:(long long)mode forImageFetchOperation:(id)operation;
- (id)tip_transformerIdentifier;

@end

#endif /* TFNImageFetchRoundTransformer_h */
