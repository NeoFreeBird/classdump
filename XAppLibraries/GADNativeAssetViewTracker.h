//
#ifndef GADNativeAssetViewTracker_h
#define GADNativeAssetViewTracker_h
@import Foundation;

@class NSMapTable, NSMutableSet, NSObject, NSSet, UIView;

@interface GADNativeAssetViewTracker : NSObject {
    /* instance variables */
    NSMapTable *_assetViewUserInteractions;
}

@property (weak, nonatomic) UIView *adChoicesContentView;
@property (readonly, nonatomic) NSMapTable *assetViews;
@property (readonly, nonatomic) NSSet *nonclickableAssetNames;
@property (readonly, nonatomic) NSMapTable *clickableAssetViews;
@property (readonly, nonatomic) NSMapTable *nonclickableAssetViews;

/* instance methods */
- (void)registerClickableAssetViews:(id)views nonclickableAssetViews:(id)views;
- (void)setClickableAssetView:(id)view assetName:(id)name previousAssetViewPointer:(id *)pointer;
- (void)configureUserInteractionForAssetView:(id)view;
- (void)restoreUserInteractionForAssetView:(id)view;
- (void)configureUserInteractionForAssetViews;
- (void)restoreUserInteractionForAssetViews;

@end

#endif /* GADNativeAssetViewTracker_h */
