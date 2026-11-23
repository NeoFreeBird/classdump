//
#ifndef _TtC7Creator36CreatorProfileEligibilityItemAdapter_h
#define _TtC7Creator36CreatorProfileEligibilityItemAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface Creator.CreatorProfileEligibilityItemAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC7Creator36CreatorProfileEligibilityItemAdapter_h */
