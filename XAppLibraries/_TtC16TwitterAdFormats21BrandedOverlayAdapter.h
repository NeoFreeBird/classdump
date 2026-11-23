//
#ifndef _TtC16TwitterAdFormats21BrandedOverlayAdapter_h
#define _TtC16TwitterAdFormats21BrandedOverlayAdapter_h
@import Foundation;

@class TFNItemsDataViewAdapter;

@interface TwitterAdFormats.BrandedOverlayAdapter : TFNItemsDataViewAdapter // (Swift)

/* instance methods */
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller estimatedTableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)init;

@end

#endif /* _TtC16TwitterAdFormats21BrandedOverlayAdapter_h */
