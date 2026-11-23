//
#ifndef T1CardComposePresenter_h
#define T1CardComposePresenter_h
@import Foundation;

#include "T1CardComposePresenter-Protocol.h"

@class NSObject, NSString;

@interface T1CardComposePresenter : NSObject <T1CardComposePresenter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (void)presentComposeSheetWithText:(id)text cardViewEventContext:(id)context scribePage:(id)page dismissCompletion:(id /* block */)completion metadata:(id)metadata flags:(struct { unsigned int x0:1; unsigned int x1:1; })flags;

@end

#endif /* T1CardComposePresenter_h */
