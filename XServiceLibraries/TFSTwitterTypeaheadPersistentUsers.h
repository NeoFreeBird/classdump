//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFSTwitterTypeaheadPersistentUsers_h
#define TFSTwitterTypeaheadPersistentUsers_h
@import Foundation;

@class NSObject;

@interface TFSTwitterTypeaheadPersistentUsers : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 userIds;
}

@property (nonatomic, readonly) long long userModelIdentifierCount;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterTypeaheadPersistentUsers_h */
