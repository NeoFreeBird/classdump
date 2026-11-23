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
