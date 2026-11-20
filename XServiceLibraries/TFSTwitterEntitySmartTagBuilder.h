//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEntitySmartTagBuilder_h
#define TFSTwitterEntitySmartTagBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntitySmartTagBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterEntitySmartTagBuilder_h */
