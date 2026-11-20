//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
