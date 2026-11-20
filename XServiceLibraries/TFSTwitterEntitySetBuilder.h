//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEntitySetBuilder_h
#define TFSTwitterEntitySetBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntitySetBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseWithJson:(id)json;
- (id)init;

@end

#endif /* TFSTwitterEntitySetBuilder_h */
