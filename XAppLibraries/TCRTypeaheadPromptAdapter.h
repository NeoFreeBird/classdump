//
#ifndef TCRTypeaheadPromptAdapter_h
#define TCRTypeaheadPromptAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter;

@interface TCRTypeaheadPromptAdapter : TFNItemsTableRowAdapter

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* TCRTypeaheadPromptAdapter_h */
