//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterConversationControlBuilder_h
#define TFSTwitterConversationControlBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterConversationControlBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseWithJson:(id)json;
- (id)init;

@end

#endif /* TFSTwitterConversationControlBuilder_h */
