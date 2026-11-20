//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC11LandingPage30LandingPageEarningsItemAdapter_h
#define _TtC11LandingPage30LandingPageEarningsItemAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface LandingPage.LandingPageEarningsItemAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)dataViewController:(id)controller willDisplayCell:(id)cell forItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC11LandingPage30LandingPageEarningsItemAdapter_h */
