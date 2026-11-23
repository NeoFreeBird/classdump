//
#ifndef _TtC23TwitterProfileModulesUI45SpotlightConfigurationModificationItemAdapter_h
#define _TtC23TwitterProfileModulesUI45SpotlightConfigurationModificationItemAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface TwitterProfileModulesUI.SpotlightConfigurationModificationItemAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC23TwitterProfileModulesUI45SpotlightConfigurationModificationItemAdapter_h */
