//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNActiveTextItemTableRowAdapter_h
#define TFNActiveTextItemTableRowAdapter_h
@import Foundation;

#include "TFNAttributedTextViewDelegate-Protocol.h"
#include "TFNItemsTableRowAdapter.h"

@class NSString;

@interface TFNActiveTextItemTableRowAdapter : TFNItemsTableRowAdapter <TFNAttributedTextViewDelegate>

@property (nonatomic) _Bool useTilingTextView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)dataViewController:(id)controller calculatedLayoutMetricsForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })dataViewController:(id)controller collectionViewSizeForItem:(id)item constrainedToSize:(struct CGSize { double x0; double x1; })size withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller collectionViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (struct CGSize { double x0; double x1; })_tfn_dataViewController:(id)controller cellSizeForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (void)attributedTextView:(id)view didTapRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextViewDidTapInactiveArea:(id)area;
- (void)attributedTextViewDidLongPressInactiveArea:(id)area;
- (void)attributedTextView:(id)view didLongPressRange:(id)range rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didTapTruncationTokenAreaWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)attributedTextView:(id)view didCopyString:(id)string;

@end

#endif /* TFNActiveTextItemTableRowAdapter_h */
