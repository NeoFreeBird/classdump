//
#ifndef T1StatusPostInstallPromptViewDelegate_Protocol_h
#define T1StatusPostInstallPromptViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1StatusPostInstallPromptViewDelegate <NSObject>

@required

/* required instance methods */
- (void)didSelectAlreadyInstalled;

@optional

@end

#endif /* T1StatusPostInstallPromptViewDelegate_Protocol_h */
