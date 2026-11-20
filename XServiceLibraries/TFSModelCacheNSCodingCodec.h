//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelCacheNSCodingCodec_h
#define TFSModelCacheNSCodingCodec_h
@import Foundation;

#include "TFSModelCacheCodec-Protocol.h"

@class NSObject;

@interface TFSModelCacheNSCodingCodec : NSObject <TFSModelCacheCodec>

@property (readonly, nonatomic) long long cacheCodecIdentifier;

/* instance methods */
- (id)cacheableFromData:(id)data;
- (id)dataFromCacheable:(id)cacheable;

@end

#endif /* TFSModelCacheNSCodingCodec_h */
