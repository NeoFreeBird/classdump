//
#ifndef TFSModelCacheCodableCodec_h
#define TFSModelCacheCodableCodec_h
@import Foundation;

#include "TFSModelCacheCodec-Protocol.h"

@class NSObject;

@interface TFSModelCacheCodableCodec : NSObject <TFSModelCacheCodec> { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 modelRegistryProvider;
}

@property (nonatomic, readonly) long long cacheCodecIdentifier;

/* instance methods */
- (id)dataFromCacheable:(id)cacheable;
- (id)cacheableFromData:(id)data;
- (id)init;

@end

#endif /* TFSModelCacheCodableCodec_h */
