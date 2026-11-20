//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtP14DMPasscodeFlow20PasscodeFlowListener__Protocol_h
#define _TtP14DMPasscodeFlow20PasscodeFlowListener__Protocol_h
@import Foundation;

@protocol DMPasscodeFlow.PasscodeFlowListener

@required

/* required instance methods */
- (void)passcodeFlowDidFinishWithViewController:(id)controller;

@optional

@end

#endif /* _TtP14DMPasscodeFlow20PasscodeFlowListener__Protocol_h */
