//
#ifndef ONBChoiceSelectionViewControllerDelegate_Protocol_h
#define ONBChoiceSelectionViewControllerDelegate_Protocol_h
@import Foundation;

#include "OCFNavigationLinkHandler-Protocol.h"

@protocol ONBChoiceSelectionViewControllerDelegate <OCFNavigationLinkHandler>

@required

/* required instance methods */
- (void)choiceSelectionViewController:(id)controller didTapNextWithChoices:(id)choices;
- (void)choiceSelectionViewControllerDidTapSkip:(id)skip;
- (id)choiceSelectionViewController:(id)controller nextLabelForSelectedChoices:(id)choices;
- (_Bool)choiceSelectionViewController:(id)controller shouldEnableNextButtonForSelectedChoices:(id)choices;
- (void)choiceSelectionViewController:(id)controller updatePrimarySelectionComponentCollectionIfNeededForSelectedChoice:(id)choice;
- (id)choiceSelectionViewController:(id)controller expandedRichText:(id)text;

@optional

@end

#endif /* ONBChoiceSelectionViewControllerDelegate_Protocol_h */
