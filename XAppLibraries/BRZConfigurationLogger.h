//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef BRZConfigurationLogger_h
#define BRZConfigurationLogger_h
@import Foundation;

@class Chat.DidEndCall, NSObject;

@interface BRZConfigurationLogger : NSObject { // (Swift)
    /* instance variables */
    oneway _Atomic Chat.DidEndCall lock;
}

@property (nonatomic) unsigned char level;
@property (nonatomic) _Bool signposts;
@property (nonatomic, copy) id /* block */ print;

/* instance methods */
- (id)init;

@end

#endif /* BRZConfigurationLogger_h */
