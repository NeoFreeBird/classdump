//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift31RestoreButtonCollectionViewCell_h
#define _TtC14T1TwitterSwift31RestoreButtonCollectionViewCell_h
@import Foundation;

@class T1TwitterSwift.RestoreButtonRowAdapterDelegate ?, T1TwitterSwift.TabCustomizationViewModel ?, TFNCollectionViewCell, _$s13TFSObservable8ObserverCMn _$sySa -> T1TwitterSwift.TabCustomizationItem _$sGGSg, _$sSo9TFNButtonCSg;

@interface T1TwitterSwift.RestoreButtonCollectionViewCell : TFNCollectionViewCell { // (Swift)
    /* instance variables */
    T1TwitterSwift.RestoreButtonRowAdapterDelegate ? delegate;
    nominal type descriptor for TFSObservable.Observer  empty-list Swift.Array -> T1TwitterSwift.TabCustomizationItem _$sGGSg tabBarItemsObserver;
    __C.TFNButton? $__lazy_storage_$_restoreButton;
    T1TwitterSwift.TabCustomizationViewModel ? viewModel;
}

/* instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)prepareForReuse;
- (id)initWithCoder:(id)coder;
- (void)didTapRestoreButton;

@end

#endif /* _TtC14T1TwitterSwift31RestoreButtonCollectionViewCell_h */
