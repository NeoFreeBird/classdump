//
#ifndef ONBEnterDateViewControllerDelegate_Protocol_h
#define ONBEnterDateViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBEnterDateViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)enterDateViewController:(id)controller didTapNextWithDate:(id)date;
- (void)enterDateViewControllerDidTapSkip:(id)skip;

@optional

@end

#endif /* ONBEnterDateViewControllerDelegate_Protocol_h */
