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
