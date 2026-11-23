//
#ifndef PTVImageLoaderSource_Protocol_h
#define PTVImageLoaderSource_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVImageLoaderSource <NSObject>

@required

/* required instance methods */
- (_Bool)isEqualToSource:(id)source;
- (id)context;
- (void)performLoad:(id)load withCachePolicy:(long long)policy;

@optional

@end

#endif /* PTVImageLoaderSource_Protocol_h */
