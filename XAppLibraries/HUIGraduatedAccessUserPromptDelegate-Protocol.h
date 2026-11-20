//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef HUIGraduatedAccessUserPromptDelegate_Protocol_h
#define HUIGraduatedAccessUserPromptDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol HUIGraduatedAccessUserPromptDelegate <NSObject>

@required

/* required instance methods */
- (void)graduatedAccessUserPrompt:(id)prompt didTapLearnMoreURL:(id)url;

@optional

@end

#endif /* HUIGraduatedAccessUserPromptDelegate_Protocol_h */
