//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
