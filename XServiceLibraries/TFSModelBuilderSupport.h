//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSModelBuilderSupport_h
#define TFSModelBuilderSupport_h
@import Foundation;

@class NSObject;

@interface TFSModelBuilderSupport : NSObject // (Swift)

/* class methods */
+ (id)parseDictionaryWithJsonData:(id)data error:(id *)error;
+ (id)parseArrayWithJsonData:(id)data error:(id *)error;

/* instance methods */
- (id)init;

@end

#endif /* TFSModelBuilderSupport_h */
