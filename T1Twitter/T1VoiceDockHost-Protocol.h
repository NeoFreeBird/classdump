//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1VoiceDockHost_Protocol_h
#define T1VoiceDockHost_Protocol_h
@import Foundation;

#include "TUIVoiceDockableViewController-Protocol.h"

@class UIViewController;

@protocol T1VoiceDockHost

@required

@property (nonatomic, readonly) UIViewController<TUIVoiceDockableViewController> *baseContentViewController;
@property (nonatomic, readonly) UIViewController<TUIVoiceDockableViewController> *topContentViewController;

/* required instance methods */
- (void)pushVoiceDockViewController:(id)controller;
- (void)removeVoiceDockViewController:(id)controller;

@optional

@end

#endif /* T1VoiceDockHost_Protocol_h */
