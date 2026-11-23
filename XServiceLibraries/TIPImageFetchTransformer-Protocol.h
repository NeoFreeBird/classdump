//
#ifndef TIPImageFetchTransformer_Protocol_h
#define TIPImageFetchTransformer_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageFetchTransformer <NSObject>

@required

/* required instance methods */
- (id)tip_transformImage:(id)image withProgress:(float)progress hintTargetDimensions:(struct CGSize { double x0; double x1; })dimensions hintTargetContentMode:(long long)mode forImageFetchOperation:(id)operation;

@optional

/* optional instance methods */
- (id)tip_transformerIdentifier;

@end

#endif /* TIPImageFetchTransformer_Protocol_h */
