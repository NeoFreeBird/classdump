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
