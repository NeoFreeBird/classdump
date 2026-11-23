//
#ifndef ONBEnterTextItemsDataViewControllerDelegate_Protocol_h
#define ONBEnterTextItemsDataViewControllerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol ONBEnterTextItemsDataViewControllerDelegate <NSObject>

@required

/* required instance methods */
- (void)enterTextItemsDataViewController:(id)controller didTapNextWithText:(id)text;
- (void)enterTextItemsDataViewControllerDidTapSkip:(id)skip;
- (void)enterTextItemsDataViewController:(id)controller didReturnWithText:(id)text;
- (void)enterTextItemsDataViewController:(id)controller didCompleteWithAuthorization:(id)authorization;
- (id)currentWindow;

@optional

@end

#endif /* ONBEnterTextItemsDataViewControllerDelegate_Protocol_h */
