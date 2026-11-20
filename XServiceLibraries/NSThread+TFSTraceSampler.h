//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSThread_TFSTraceSampler_h
#define NSThread_TFSTraceSampler_h
@import Foundation;

@interface NSThread (TFSTraceSampler)

/* instance methods */
- (id)tfs_callStackReturnAddresses;
- (void)tfs_enableCallStackPeeking;

@end

#endif /* NSThread_TFSTraceSampler_h */
