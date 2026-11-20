//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef FIRSessionsProvider_Protocol_h
#define FIRSessionsProvider_Protocol_h
@import Foundation;

@protocol FIRSessionsProvider

@required

/* required instance methods */
- (void)registerWithSubscriber:(id)subscriber;

@optional

@end

#endif /* FIRSessionsProvider_Protocol_h */
