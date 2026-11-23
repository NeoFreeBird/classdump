//
#ifndef TFSAccountFeatureSwitches_T1ProtocolHandler_h
#define TFSAccountFeatureSwitches_T1ProtocolHandler_h
@import Foundation;

@interface TFSAccountFeatureSwitches (T1ProtocolHandler)

/* class methods */
+ (_Bool)isPushOpenStatusInPlaceEnabled;

/* instance methods */
- (_Bool)isDashSplitViewRevealTransitionEnabled;
- (_Bool)isTabSwitchTransitionEnabled;
- (_Bool)isTabBarGestureReworkEnabled;
- (_Bool)isDashProfilePreloadEnabled;

@end

#endif /* TFSAccountFeatureSwitches_T1ProtocolHandler_h */
