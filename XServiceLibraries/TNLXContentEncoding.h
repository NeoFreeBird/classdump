//
#ifndef TNLXContentEncoding_h
#define TNLXContentEncoding_h
@import Foundation;

@class NSObject;

@interface TNLXContentEncoding : NSObject

/* class methods */
+ (id)GZIPContentEncoder;
+ (id)GZIPContentDecoder;
+ (id)DEFLATEContentEncoder;
+ (id)DEFLATEContentDecoder;
+ (id)Base64ContentEncoder;
+ (id)Base64ContentDecoder;

@end

#endif /* TNLXContentEncoding_h */
