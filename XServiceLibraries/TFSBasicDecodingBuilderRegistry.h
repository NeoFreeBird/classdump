//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSBasicDecodingBuilderRegistry_h
#define TFSBasicDecodingBuilderRegistry_h
@import Foundation;

@class NSObject;

@interface TFSBasicDecodingBuilderRegistry : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 encodableNameToDecodingBuilder;
    B24@0:8@"NSString"16 inFrontOf;
}

/* instance methods */
- (id)init;

@end

#endif /* TFSBasicDecodingBuilderRegistry_h */
