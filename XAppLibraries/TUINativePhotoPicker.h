//
#ifndef TUINativePhotoPicker_h
#define TUINativePhotoPicker_h
@import Foundation;

@class NSArray, NSDictionary, TFNViewController;

@interface TUINativePhotoPicker : TFNViewController { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 delegate;
    @40@0:8:16@24@32 selectionLimit;
    @40@0:8:16@24@32 allowLivePhotos;
    @40@0:8:16@24@32 onAssetSelection;
    @40@0:8:16@24@32 onSelectionResult;
    @40@0:8:16@24@32 loadAssetsImmediately;
}

@property (nonatomic, copy) NSArray *preselectedAssetIdentifiers;
@property (nonatomic, copy) NSDictionary *preselectedAssetsByIdentifier;
@property (nonatomic) long long filter;

/* instance methods */
- (id)initWithSelectionLimit:(long long)limit allowLivePhotos:(_Bool)photos loadAssetsImmediately:(_Bool)immediately delegate:(id)delegate;
- (id)initWithSelectionLimit:(long long)limit allowLivePhotos:(_Bool)photos loadAssetsImmediately:(_Bool)immediately onAssetSelection:(id /* block */)selection;
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* TUINativePhotoPicker_h */
