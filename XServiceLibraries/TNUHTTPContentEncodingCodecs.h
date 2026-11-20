//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TNUHTTPContentEncodingCodecs_h
#define TNUHTTPContentEncodingCodecs_h
@import Foundation;

@class NSObject;

@interface TNUHTTPContentEncodingCodecs : NSObject

/* class methods */
+ (id)brotliDecoder;
+ (id)gzipEncoder;
+ (id)deflateEncoder;

@end

#endif /* TNUHTTPContentEncodingCodecs_h */
