//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEntityURLBuilder_h
#define TFSTwitterEntityURLBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntityURLBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseJSONDictionary:(id)jsondictionary strict:(_Bool)strict;
- (id)init;

@end

#endif /* TFSTwitterEntityURLBuilder_h */
