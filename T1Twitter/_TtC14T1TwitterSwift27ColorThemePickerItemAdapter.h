//
#ifndef _TtC14T1TwitterSwift27ColorThemePickerItemAdapter_h
#define _TtC14T1TwitterSwift27ColorThemePickerItemAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface T1TwitterSwift.ColorThemePickerItemAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (_Bool)dataViewController:(id)controller shouldHighlightItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift27ColorThemePickerItemAdapter_h */
