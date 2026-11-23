//
#ifndef TFNImageFetchBlurTransformer_h
#define TFNImageFetchBlurTransformer_h
@import Foundation;

#include "TIPImageFetchTransformer-Protocol.h"

@class NSObject, NSString;

@interface TFNImageFetchBlurTransformer : NSObject <TIPImageFetchTransformer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedBlurTransformer;

/* instance methods */
- (id)tip_transformerIdentifier;
- (id)tip_transformImage:(id)image withProgress:(float)progress hintTargetDimensions:(struct CGSize { double x0; double x1; })dimensions hintTargetContentMode:(long long)mode forImageFetchOperation:(id)operation;

@end

#endif /* TFNImageFetchBlurTransformer_h */
