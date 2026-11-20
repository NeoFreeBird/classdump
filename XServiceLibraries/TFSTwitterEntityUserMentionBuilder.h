//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterEntityUserMentionBuilder_h
#define TFSTwitterEntityUserMentionBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterEntityUserMentionBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseJSONDictionary:(id)jsondictionary;
- (id)init;

@end

#endif /* TFSTwitterEntityUserMentionBuilder_h */
