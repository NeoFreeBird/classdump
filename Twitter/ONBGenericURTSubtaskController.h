//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef ONBGenericURTSubtaskController_h
#define ONBGenericURTSubtaskController_h
@import Foundation;

#include "ONBConditionalTextViewModel.h"
#include "ONBContainerSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"
#include "ONBSubtaskDataObservable.h"
#include "ONBSubtaskDataObservableFactory-Protocol.h"
#include "T1URTViewControllerLoadingDelegate-Protocol.h"

@class NSString, OCFGenericURTSubtask, T1URTViewController;

@interface ONBGenericURTSubtaskController : ONBContainerSubtaskController <ONBSubtaskDataObservableFactory, T1URTViewControllerLoadingDelegate> {
    /* instance variables */
    id <ONBSubtaskControllerDelegate> _delegate;
    _Bool _didEncounterLoadingError;
    OCFGenericURTSubtask *_subtask;
    ONBSubtaskDataObservable *_subtaskDataObservable;
    ONBConditionalTextViewModel *_nextLinkConditionalText;
    ONBConditionalTextViewModel *_detailConditionalText;
    T1URTViewController *_generatedViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)supportedSubtaskClasses;

/* instance methods */
- (id)initWithSubtask:(id)subtask flowToken:(id)token delegate:(id)delegate;
- (id)nextLink;
- (id)detailRichText;
- (id)generateContainedViewController;
- (_Bool)shouldShowSeparator;
- (void)startWithNavigationContext:(id)context navigationLink:(id)link;
- (_Bool)requiresAccountToStart;
- (id)subtaskData;
- (id)private_scribeContext;
- (void)private_updateNextButton;
- (void)private_updateDetailText;
- (id)subtaskDataObservable:(id)observable createObservableForKey:(id)key;
- (void)urtViewController:(id)controller didLoadViewModels:(id)models;

@end

#endif /* ONBGenericURTSubtaskController_h */
