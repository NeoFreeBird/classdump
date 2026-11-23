//
#ifndef T1MuteKeywordFormViewControllerDelegate_Protocol_h
#define T1MuteKeywordFormViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1MuteKeywordFormViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)muteKeywordViewController:(id)controller didRefreshKeywordList:(id)list forKeywordString:(id)string action:(unsigned long long)action;
- (void)muteKeywordViewController:(id)controller handleErrorForKeywordString:(id)string action:(unsigned long long)action isUserInputFormError:(_Bool)error;

@optional

@end

#endif /* T1MuteKeywordFormViewControllerDelegate_Protocol_h */
