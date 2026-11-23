//
#ifndef TIPImageViewFetchHelperDelegate_Protocol_h
#define TIPImageViewFetchHelperDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TIPImageViewFetchHelperDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (_Bool)tip_fetchHelper:(id)helper shouldUpdateImageWithPreviewImageResult:(id)result;
- (_Bool)tip_fetchHelper:(id)helper shouldContinueLoadingAfterFetchingPreviewImageResult:(id)result;
- (_Bool)tip_fetchHelper:(id)helper shouldLoadProgressivelyWithIdentifier:(id)identifier URL:(id)url imageType:(id)type originalDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (_Bool)tip_fetchHelper:(id)helper shouldLoadProgressivelyWithIdentifier:(id)identifier URL:(id)url imageType:(id)type originalDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (_Bool)tip_fetchHelper:(id)helper shouldReloadAfterDifferentFetchCompletedWithImageContainer:(id)container dimensions:(struct CGSize { double x0; double x1; })dimensions identifier:(id)identifier URL:(id)url treatedAsPlaceholder:(_Bool)placeholder manuallyStored:(_Bool)stored;
- (_Bool)tip_fetchHelper:(id)helper shouldReloadAfterDifferentFetchCompletedWithImageContainer:(id)container dimensions:(struct CGSize { double x0; double x1; })dimensions identifier:(id)identifier URL:(id)url treatedAsPlaceholder:(_Bool)placeholder manuallyStored:(_Bool)stored;
- (void)tip_fetchHelperDidStartLoading:(id)loading;
- (void)tip_fetchHelper:(id)helper didUpdateProgress:(float)progress;
- (void)tip_fetchHelper:(id)helper didUpdateDisplayedImageContainer:(id)container fromSourceDimensions:(struct CGSize { double x0; double x1; })dimensions isFinal:(_Bool)final;
- (void)tip_fetchHelper:(id)helper didLoadFinalImageFromSource:(long long)source;
- (void)tip_fetchHelper:(id)helper didLoadFinalImageFromSource:(long long)source;
- (void)tip_fetchHelper:(id)helper didFailToLoadFinalImage:(id)image;
- (void)tip_fetchHelperDidReset:(id)reset;
- (void)tip_fetchHelperDidStartLoadingFromNetwork:(id)network;
- (void)tip_fetchHelperDidStartLoadingFromNetwork:(id)network;
- (_Bool)tip_fetchHelper:(id)helper shouldReloadAfterDifferentFetchCompletedWithImage:(id)image dimensions:(struct CGSize { double x0; double x1; })dimensions identifier:(id)identifier URL:(id)url treatedAsPlaceholder:(_Bool)placeholder manuallyStored:(_Bool)stored;
- (_Bool)tip_fetchHelper:(id)helper shouldReloadAfterDifferentFetchCompletedWithImage:(id)image dimensions:(struct CGSize { double x0; double x1; })dimensions identifier:(id)identifier URL:(id)url treatedAsPlaceholder:(_Bool)placeholder manuallyStored:(_Bool)stored;
- (void)tip_fetchHelper:(id)helper didUpdateDisplayedImage:(id)image fromSourceDimensions:(struct CGSize { double x0; double x1; })dimensions isFinal:(_Bool)final;

@end

#endif /* TIPImageViewFetchHelperDelegate_Protocol_h */
