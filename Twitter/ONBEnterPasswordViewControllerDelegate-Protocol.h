//
#ifndef ONBEnterPasswordViewControllerDelegate_Protocol_h
#define ONBEnterPasswordViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBEnterPasswordViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)enterPasswordViewController:(id)controller didTapNextWithInputText:(id)text;
- (void)enterPasswordViewControllerDidTapSkip:(id)skip;

@optional

@end

#endif /* ONBEnterPasswordViewControllerDelegate_Protocol_h */
