//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSSwiftExceptionConverter_h
#define TFSSwiftExceptionConverter_h
@import Foundation;

@class NSObject;

@interface TFSSwiftExceptionConverter : NSObject

/* class methods */
+ (_Bool)tryBlock:(id /* block */)block error:(id *)error;

@end

#endif /* TFSSwiftExceptionConverter_h */
