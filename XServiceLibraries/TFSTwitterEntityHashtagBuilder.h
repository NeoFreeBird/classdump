//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEntityHashtagBuilder_h
#define TFSTwitterEntityHashtagBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntityHashtagBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterEntityHashtagBuilder_h */
