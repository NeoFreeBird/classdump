//
#ifndef PTVSwitchboardAsset_h
#define PTVSwitchboardAsset_h
@import Foundation;

@class NSObject, NSString, PHAsset;

@interface PTVSwitchboardAsset : NSObject

@property (retain, nonatomic) PHAsset *photoAsset;
@property (readonly, nonatomic) long long source;
@property (readonly, nonatomic) NSString *sourceIdentifier;

/* class methods */
+ (id)ImageRequestOptions;

/* instance methods */
- (id)initWithPhotoLibraryAsset:(id)asset;
- (void)createAssetThatFitsSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode withCallback:(id /* block */)callback;
- (_Bool)containsPhotoLibraryAsset:(id)asset;

@end

#endif /* PTVSwitchboardAsset_h */
