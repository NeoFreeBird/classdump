//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC16XActivityHistory35RecencySectionHeaderTableRowAdapter_h
#define _TtC16XActivityHistory35RecencySectionHeaderTableRowAdapter_h
@import Foundation;

@class TFNItemsTableRowAdapter;

@interface XActivityHistory.RecencySectionHeaderTableRowAdapter : TFNItemsTableRowAdapter // (Swift)

/* instance methods */
- (id)init;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;

@end

#endif /* _TtC16XActivityHistory35RecencySectionHeaderTableRowAdapter_h */
