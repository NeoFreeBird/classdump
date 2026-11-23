//
#ifndef StickerCategoryEmptyViewController_h
#define StickerCategoryEmptyViewController_h
@import Foundation;

@class TFNButton, TFNViewController, UIActivityIndicatorView, UILabel;
@protocol StickerCategoryEmptyViewControllerDelegate;

@interface StickerCategoryEmptyViewController : TFNViewController {
    /* instance variables */
    UIActivityIndicatorView *_indicatorView;
    UILabel *_errorTitleLabel;
    UILabel *_errorMessageLabel;
    TFNButton *_retryButton;
}

@property (weak, nonatomic) id <StickerCategoryEmptyViewControllerDelegate> delegate;
@property (nonatomic) _Bool shouldShowError;
@property (nonatomic) long long catalogType;

/* instance methods */
- (void)viewDidLoad;
- (id)initWithCatalogType:(long long)type;
- (void)_updateViewStates;
- (void)_retryButtonTapped:(id)tapped;

@end

#endif /* StickerCategoryEmptyViewController_h */
