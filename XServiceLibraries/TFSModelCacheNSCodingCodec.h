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
