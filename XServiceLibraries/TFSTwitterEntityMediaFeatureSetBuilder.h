//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEntityMediaFeatureSetBuilder_h
#define TFSTwitterEntityMediaFeatureSetBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntityMediaFeatureSetBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseWithJson:(id)json;
- (id)init;

@end

#endif /* TFSTwitterEntityMediaFeatureSetBuilder_h */
