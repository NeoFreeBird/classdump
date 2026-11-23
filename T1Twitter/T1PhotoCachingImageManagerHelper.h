//
#ifndef T1PhotoCachingImageManagerHelper_h
#define T1PhotoCachingImageManagerHelper_h
@import Foundation;

@class NSObject, PHCachingImageManager, PHImageRequestOptions;
@protocol T1PhotoCachingImageManagerHelperDelegate;

@interface T1PhotoCachingImageManagerHelper : NSObject

@property (weak, nonatomic) id <T1PhotoCachingImageManagerHelperDelegate> delegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } cachedRect;
@property (readonly, nonatomic) PHCachingImageManager *imageManager;
@property (nonatomic) struct CGSize { double x0; double x1; } targetSize;
@property (nonatomic) long long contentMode;
@property (retain, nonatomic) PHImageRequestOptions *options;

/* instance methods */
- (void)dealloc;
- (_Bool)_canUseCachingImageManager;
- (void)invalidate;
- (void)updateForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (int)requestImageForAsset:(id)asset resultHandler:(id /* block */)handler;

@end

#endif /* T1PhotoCachingImageManagerHelper_h */
