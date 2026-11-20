//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BookmarkTimelineFactory_h
#define T1BookmarkTimelineFactory_h
@import Foundation;

@class NSObject;

@interface T1BookmarkTimelineFactory : NSObject // (Swift)

/* class methods */
+ (id)bookmarkFoldersPlaygroundWithAccount:(id)account;

/* instance methods */
- (id)init;

@end

#endif /* T1BookmarkTimelineFactory_h */
