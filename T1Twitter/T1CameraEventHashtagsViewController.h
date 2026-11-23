//
#ifndef T1CameraEventHashtagsViewController_h
#define T1CameraEventHashtagsViewController_h
@import Foundation;

#include "T1CameraEventHashtagsViewControllerDelegate-Protocol.h"
#include "UICollectionViewDataSource-Protocol.h"
#include "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView, UIColor, UIViewController;

@interface T1CameraEventHashtagsViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) id <T1CameraEventHashtagsViewControllerDelegate> delegate;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *borderColor;
@property (retain, nonatomic) UIColor *selectedTextColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (copy, nonatomic) NSArray *eventHashtags;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithNibName:(id)name bundle:(id)bundle;
- (void)_t1_main_updateCollectionViewData;
- (void)_t1_main_updateCollectionViewSelectionAnimated:(_Bool)animated;
- (void)viewDidLoad;
- (void)_t1_main_loadCollectionViewWithConstraints:(id)constraints;
- (long long)numberOfSectionsInCollectionView:(id)view;
- (long long)collectionView:(id)view numberOfItemsInSection:(long long)section;
- (id)collectionView:(id)view cellForItemAtIndexPath:(id)path;
- (void)collectionView:(id)view didSelectItemAtIndexPath:(id)path;

@end

#endif /* T1CameraEventHashtagsViewController_h */
