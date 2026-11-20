//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
