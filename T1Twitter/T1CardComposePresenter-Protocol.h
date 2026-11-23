//
#ifndef T1CardComposePresenter_Protocol_h
#define T1CardComposePresenter_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1CardComposePresenter <NSObject>

@required

/* required instance methods */
- (void)presentComposeSheetWithText:(id)text cardViewEventContext:(id)context scribePage:(id)page dismissCompletion:(id /* block */)completion metadata:(id)metadata flags:(struct { unsigned int x0:1; unsigned int x1:1; })flags;

@optional

@end

#endif /* T1CardComposePresenter_Protocol_h */
