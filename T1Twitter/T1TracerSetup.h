//
#ifndef T1TracerSetup_h
#define T1TracerSetup_h
@import Foundation;

@class NSObject;

@interface T1TracerSetup : NSObject // (Swift)

/* class methods */
+ (void)setupTracerWithScribe:(id)scribe account:(id)account backgroundTaskManager:(id)manager;

/* instance methods */
- (id)init;

@end

#endif /* T1TracerSetup_h */
