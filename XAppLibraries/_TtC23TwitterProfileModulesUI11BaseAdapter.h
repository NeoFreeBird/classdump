//
#ifndef _TtC23TwitterProfileModulesUI11BaseAdapter_h
#define _TtC23TwitterProfileModulesUI11BaseAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter, _$sSS, _$sSSSg;

@interface TwitterProfileModulesUI.BaseAdapter : TFNItemsDataViewAdapter { // (Swift)
    /* instance variables */
    Swift.String typeName;
    Swift.String? placeholder;
}

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC23TwitterProfileModulesUI11BaseAdapter_h */
