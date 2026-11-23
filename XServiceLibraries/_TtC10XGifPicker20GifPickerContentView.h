//
#ifndef _TtC10XGifPicker20GifPickerContentView_h
#define _TtC10XGifPicker20GifPickerContentView_h
@import Foundation;

#include "UICollectionViewDelegate-Protocol.h"

@class UIView, XDesignSystem.Input ?, XGifPicker.GifPickerCellRegistrationProvider ?, XGifPicker.GifPickerChipsState, XGifPicker.GifPickerCollectionView ?, XGifPicker.GifPickerContentViewListener ?, XGifPicker.GifPickerDataSource ?, XGifPicker.GifPickerErrorView ?, XGifPicker.GifPickerMasonryLayout, _$s7Combine11CancellableMp _$s_p _$s10Foundation3URLVMn _$s_yABSgctc, _$sSDySS XGifPicker.GifPickerItem;

@interface XGifPicker.GifPickerContentView : UIView <UICollectionViewDelegate> { // (Swift)
    /* instance variables */
    XGifPicker.GifPickerContentViewListener ? listener;
    XGifPicker.GifPickerChipsState chipsState;
    Swift.Dictionary empty-list Swift.String XGifPicker.GifPickerItem gifsByIdentifier;
    protocol descriptor for Combine.Cancellable _$s_p nominal type descriptor for Foundation.URL _$s_yABSgctc loadVideo;
    XGifPicker.GifPickerMasonryLayout masonryLayout;
    XGifPicker.GifPickerCollectionView ? $__lazy_storage_$_collectionView;
    XGifPicker.GifPickerDataSource ? $__lazy_storage_$_dataSource;
    XGifPicker.GifPickerErrorView ? $__lazy_storage_$_errorView;
    XGifPicker.GifPickerCellRegistrationProvider ? $__lazy_storage_$_registrationProvider;
    XDesignSystem.Input ? $__lazy_storage_$_searchField;
}

/* instance methods */
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;
- (void)collectionView:(id)view willDisplayCell:(id)cell forItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didEndDisplayingCell:(id)cell forItemAtIndexPath:(id)path;
- (id)initWithCoder:(id)coder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;

@end

#endif /* _TtC10XGifPicker20GifPickerContentView_h */
