//
#ifndef T1ElectionsBridge_h
#define T1ElectionsBridge_h
@import Foundation;

@class NSObject;

@interface T1ElectionsBridge : NSObject // (Swift)

/* class methods */
+ (id)pushEntrySource;
+ (id)makeHubViewControllerWithAccount:(id)account electionID:(id)id raceID:(id)id entrySource:(id)source;

/* instance methods */
- (id)init;

@end

#endif /* T1ElectionsBridge_h */
