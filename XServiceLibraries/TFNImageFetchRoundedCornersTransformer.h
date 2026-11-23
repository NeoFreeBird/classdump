//
#ifndef TFNImageFetchRoundedCornersTransformer_h
#define TFNImageFetchRoundedCornersTransformer_h
@import Foundation;

#include "TIPImageFetchTransformer-Protocol.h"

@class NSObject, NSString;

@interface TFNImageFetchRoundedCornersTransformer : NSObject <TIPImageFetchTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)tip_transformImage:(id)image withProgress:(float)progress hintTargetDimensions:(struct CGSize { double x0; double x1; })dimensions hintTargetContentMode:(long long)mode forImageFetchOperation:(id)operation;
- (id)tip_transformerIdentifier;

@end

#endif /* TFNImageFetchRoundedCornersTransformer_h */
