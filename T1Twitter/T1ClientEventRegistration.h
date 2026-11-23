//
#ifndef T1ClientEventRegistration_h
#define T1ClientEventRegistration_h
@import Foundation;

@class NSObject;

@interface T1ClientEventRegistration : NSObject // (Swift)

/* class methods */
+ (void)registerForEventsWithScribe:(id)scribe account:(id)account backgroundTaskManager:(id)manager;

/* instance methods */
- (id)init;

@end

#endif /* T1ClientEventRegistration_h */
