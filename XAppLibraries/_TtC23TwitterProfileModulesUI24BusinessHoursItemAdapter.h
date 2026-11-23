//
#ifndef _TtC23TwitterProfileModulesUI24BusinessHoursItemAdapter_h
#define _TtC23TwitterProfileModulesUI24BusinessHoursItemAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface TwitterProfileModulesUI.BusinessHoursItemAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC23TwitterProfileModulesUI24BusinessHoursItemAdapter_h */
