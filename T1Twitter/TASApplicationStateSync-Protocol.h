//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASApplicationStateSync_Protocol_h
#define TASApplicationStateSync_Protocol_h
@import Foundation;

@protocol TASApplicationStateSync

@required

/* required instance methods */
- (void)setStateActive;
- (void)setStateInactive;
- (void)setStateBackground;
- (void)setStateWillEnterForeground;

@optional

@end

#endif /* TASApplicationStateSync_Protocol_h */
