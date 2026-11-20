//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEntityMediaBuilder_h
#define TFSTwitterEntityMediaBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntityMediaBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseJSONDictionary:(id)jsondictionary strict:(_Bool)strict;
- (id)init;

@end

#endif /* TFSTwitterEntityMediaBuilder_h */
