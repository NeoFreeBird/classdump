//
#ifndef ONBChoiceSelectionSubtaskController_h
#define ONBChoiceSelectionSubtaskController_h
@import Foundation;

#include "ONBChoiceSelectionViewControllerDelegate-Protocol.h"
#include "ONBComponentCollectionViewModel.h"
#include "ONBSubtaskController.h"
#include "ONBSubtaskControllerDelegate-Protocol.h"

@class NSString, OCFChoiceSelectionSubtask, OCFChoiceSelectionSubtaskState;

@interface ONBChoiceSelectionSubtaskController : ONBSubtaskController <ONBChoiceSelectionViewControllerDelegate> {
    /* instance variables */
    OCFChoiceSelectionSubtask *_subtask;
    id <ONBSubtaskControllerDelegate> _delegate;
    OCFChoiceSelectionSubtaskState *_state;
    _Bool _showingPrimaryChoiceSelector;
    ONBComponentCollectionViewModel *_componentsViewModel;
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
- (void)private_presentPrimaryChoiceSelectionSheet;
- (id)private_createChoiceSelectionControllerWithHeader:(id)header componentCollection:(id)collection showMore:(id)more choices:(id)choices selectionType:(long long)type;
- (void)choiceSelectionViewController:(id)controller didTapNextWithChoices:(id)choices;
- (void)choiceSelectionViewControllerDidTapSkip:(id)skip;
- (id)choiceSelectionViewController:(id)controller nextLabelForSelectedChoices:(id)choices;
- (_Bool)choiceSelectionViewController:(id)controller shouldEnableNextButtonForSelectedChoices:(id)choices;
- (void)choiceSelectionViewController:(id)controller updatePrimarySelectionComponentCollectionIfNeededForSelectedChoice:(id)choice;
- (id)choiceSelectionViewController:(id)controller expandedRichText:(id)text;

@end

#endif /* ONBChoiceSelectionSubtaskController_h */
