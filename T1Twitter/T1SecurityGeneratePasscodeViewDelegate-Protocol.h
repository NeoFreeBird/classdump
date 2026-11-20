//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1SecurityGeneratePasscodeViewDelegate_Protocol_h
#define T1SecurityGeneratePasscodeViewDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1SecurityGeneratePasscodeViewDelegate <NSObject>

@required

/* required instance methods */
- (void)generatePasscodeView:(id)view didTapGenerateButton:(id)button;
- (void)generatePasscodeView:(id)view didTapScreenshotButton:(id)button;
- (void)generatePasscodeView:(id)view didTapLearnMoreButton:(id)button;

@optional

@end

#endif /* T1SecurityGeneratePasscodeViewDelegate_Protocol_h */
