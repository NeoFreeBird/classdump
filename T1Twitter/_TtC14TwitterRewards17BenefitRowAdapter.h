//
#ifndef _TtC14TwitterRewards17BenefitRowAdapter_h
#define _TtC14TwitterRewards17BenefitRowAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface TwitterRewards.BenefitRowAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14TwitterRewards17BenefitRowAdapter_h */
