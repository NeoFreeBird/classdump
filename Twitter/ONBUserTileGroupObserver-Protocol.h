//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBUserTileGroupObserver_Protocol_h
#define ONBUserTileGroupObserver_Protocol_h
@import Foundation;

@protocol ONBUserTileGroupObserver

@required

/* required instance methods */
- (void)userTileGroup:(id)group didUpdateSelectedUserIDs:(id)ids;

@optional

@end

#endif /* ONBUserTileGroupObserver_Protocol_h */
