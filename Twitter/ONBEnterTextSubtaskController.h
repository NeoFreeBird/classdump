//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBEnterTextSubtaskController_h
#define ONBEnterTextSubtaskController_h
@import Foundation;

#include "ONBAddLocationViewControllerDelegate-Protocol.h"
#include "ONBEnterTextItemsDataViewControllerDelegate-Protocol.h"
#include "ONBEnterTextViewControllerDelegate-Protocol.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFEnterTextSubtask, OCFEnterTextSubtaskState;

@interface ONBEnterTextSubtaskController : ONBSubtaskController <ONBEnterTextItemsDataViewControllerDelegate, ONBEnterTextViewControllerDelegate, ONBAddLocationViewControllerDelegate> {
    /* instance variables */
    OCFEnterTextSubtask *_subtask;
    OCFEnterTextSubtaskState *_state;
    id <ONBSubtaskControllerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (void)enterTextItemsDataViewController:(id)controller didTapNextWithText:(id)text;
- (void)enterTextItemsDataViewControllerDidTapSkip:(id)skip;
- (void)enterTextItemsDataViewController:(id)controller didReturnWithText:(id)text;
- (void)enterTextViewController:(id)controller didTapNextWithText:(id)text;
- (void)enterTextViewControllerDidTapSkip:(id)skip;
- (void)enterTextViewController:(id)controller didReturnWithText:(id)text;
- (void)enterTextItemsDataViewController:(id)controller didCompleteWithAuthorization:(id)authorization;
- (id)currentWindow;
- (void)addLocationViewController:(id)controller didTapNextWithLocation:(id)location placeID:(id)id;
- (void)addLocationViewControllerDidTapSkip:(id)skip;
- (long long)private_keyboardTypeFor:(long long)_for;

@end

#endif /* ONBEnterTextSubtaskController_h */
