//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMFoundMediaDecoderConfig_h
#define TTMFoundMediaDecoderConfig_h
@import Foundation;

@class NSObject;

@interface TTMFoundMediaDecoderConfig : NSObject

@property (readonly, nonatomic) unsigned long long maxDecodableFramesCount;

/* instance methods */
- (id)initWithMaxDecodableFramesCount:(unsigned long long)count;

@end

#endif /* TTMFoundMediaDecoderConfig_h */
