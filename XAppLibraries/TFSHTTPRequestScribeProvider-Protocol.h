//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSHTTPRequestScribeProvider_Protocol_h
#define TFSHTTPRequestScribeProvider_Protocol_h
@import Foundation;

@protocol TFSHTTPRequestScribeMethods;

@protocol TFSHTTPRequestScribeProvider

@required

@property (nonatomic, readonly) id <TFSHTTPRequestScribeMethods> httpRequestScribe;

@optional

@end

#endif /* TFSHTTPRequestScribeProvider_Protocol_h */
