//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelCacheCodec_Protocol_h
#define TFSModelCacheCodec_Protocol_h
@import Foundation;

@protocol TFSModelCacheCodec

@required

@property (readonly, nonatomic) long long cacheCodecIdentifier;

/* required instance methods */
- (id)cacheableFromData:(id)data;
- (id)dataFromCacheable:(id)cacheable;

@optional

@end

#endif /* TFSModelCacheCodec_Protocol_h */
