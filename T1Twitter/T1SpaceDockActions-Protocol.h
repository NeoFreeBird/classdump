//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SpaceDockActions_Protocol_h
#define T1SpaceDockActions_Protocol_h
@import Foundation;

@protocol T1SpaceDockActions

@required

/* required instance methods */
- (void)dockDidTapOpen;
- (void)dockDidTapClose;
- (void)dockDidTapMute;
- (void)dockDidTapPlay;
- (void)dockDidTapPause;
- (void)dockDidTapSkipAhead;

@optional

@end

#endif /* T1SpaceDockActions_Protocol_h */
