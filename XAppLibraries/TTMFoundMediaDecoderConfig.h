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
