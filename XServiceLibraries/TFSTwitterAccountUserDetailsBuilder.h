//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterAccountUserDetailsBuilder_h
#define TFSTwitterAccountUserDetailsBuilder_h
@import Foundation;

@class NSObject;

@interface TFSTwitterAccountUserDetailsBuilder : NSObject // (Swift)

/* instance methods */
- (id)parseFromJSON:(id)json;
- (id)init;

@end

#endif /* TFSTwitterAccountUserDetailsBuilder_h */
