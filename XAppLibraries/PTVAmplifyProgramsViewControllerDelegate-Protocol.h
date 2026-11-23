//
#ifndef PTVAmplifyProgramsViewControllerDelegate_Protocol_h
#define PTVAmplifyProgramsViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVAmplifyProgramsViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)amplifyProgramsViewController:(id)controller didChangeAmplifyProgram:(id)program;

@optional

@end

#endif /* PTVAmplifyProgramsViewControllerDelegate_Protocol_h */
