//
#ifndef ONBEnterUsernameViewControllerDelegate_Protocol_h
#define ONBEnterUsernameViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBEnterUsernameViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (_Bool)shouldBeginEditingWithUsernameViewController:(id)controller;
- (void)enterUsernameViewControllerDidLoad:(id)load;
- (void)enterUsernameViewControllerDidTapNext:(id)next;
- (void)enterUsernameViewControllerDidTapSkip:(id)skip;

@optional

@end

#endif /* ONBEnterUsernameViewControllerDelegate_Protocol_h */
