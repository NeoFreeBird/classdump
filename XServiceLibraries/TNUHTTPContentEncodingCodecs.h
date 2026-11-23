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
