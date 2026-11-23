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
