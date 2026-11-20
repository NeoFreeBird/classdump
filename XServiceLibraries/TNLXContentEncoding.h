//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
