//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef APMPSweepable_Protocol_h
#define APMPSweepable_Protocol_h
@import Foundation;

@protocol APMPSweepable

@required

/* required instance methods */
- (void)sweep;

@optional

@end

#endif /* APMPSweepable_Protocol_h */
