//
#ifndef TFNTwitterImageViewPlaceholderTransformer_h
#define TFNTwitterImageViewPlaceholderTransformer_h
@import Foundation;

#include "TIPImageFetchTransformer-Protocol.h"

@class NSObject, NSString;

@interface TFNTwitterImageViewPlaceholderTransformer : NSObject <TIPImageFetchTransformer>

@property (readonly, nonatomic) id <TIPImageFetchTransformer> nonPlaceholderTransformer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNonPlaceholderTransformer:(id)transformer;
- (id)tip_transformImage:(id)image withProgress:(float)progress hintTargetDimensions:(struct CGSize { double x0; double x1; })dimensions hintTargetContentMode:(long long)mode forImageFetchOperation:(id)operation;

@end

#endif /* TFNTwitterImageViewPlaceholderTransformer_h */
