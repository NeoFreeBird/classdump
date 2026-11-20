//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMenuSheetActionItemAdapter_h
#define TFNMenuSheetActionItemAdapter_h
@import Foundation;

#include "TFNItemsDataViewAdapter.h"
#include "TFNMenuSheetActionAdapterDelegate-Protocol.h"

@class UIColor, UIFont;

@interface TFNMenuSheetActionItemAdapter : TFNItemsDataViewAdapter

@property (weak, nonatomic) id <TFNMenuSheetActionAdapterDelegate> delegate;
@property (readonly, nonatomic) UIColor *titleTextColor;
@property (readonly, nonatomic) UIColor *subtitleTextColor;
@property (readonly, nonatomic) UIColor *iconColor;
@property (readonly, nonatomic) UIColor *destructiveColor;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) UIFont *subtitleFont;

/* instance methods */
- (id)initWithDelegate:(id)delegate;
- (long long)_tfn_tableAccessoryTypeFromMenuSheetActionItem:(id)item;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)minimumActionItemHeightForActionItem:(id)item;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)handleLongPress:(id)press;
- (void)dataViewController:(id)controller didSelectItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)titleFont:(id)font;
- (id)titleTextColor:(id)color;

@end

#endif /* TFNMenuSheetActionItemAdapter_h */
