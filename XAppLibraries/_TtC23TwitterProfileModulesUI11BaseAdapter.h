//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
