//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIImage_TIPAdditions_h
#define UIImage_TIPAdditions_h
@import Foundation;

@interface UIImage (TIPAdditions)

/* class methods */
+ (id)tae_imageNamed:(id)named;
+ (id)tfn_vectorImageSearchDirectoryURLs;
+ (void)tfn_vectorImageSetSearchDirectoryURLs:(id)urls;
+ (void)tfn_vectorImageSetFallbackBundle:(id)bundle;
+ (void)tfn_vectorImageSetSizeCacheEnabled:(_Bool)enabled;
+ (id)tfn_vectorImageOverrideContainersDirectoryURL;
+ (void)tfn_vectorImageSetOverrideContainersDirectoryURL:(id)url;
+ (id)tfn_vectorImageOverrideContainerName;
+ (void)tfn_vectorImageSetOverrideContainerName:(id)name;
+ (id)tfn_vectorImageNamed:(id)named height:(double)height fillColor:(id)color;
+ (id)tfn_vectorImageNamed:(id)named highContrastVariantNamed:(id)named height:(double)height fillColor:(id)color;
+ (id)tfn_vectorImageNamed:(id)named fitsSize:(struct CGSize { double x0; double x1; })size fillColor:(id)color;
+ (id)tfn_vectorImageByCombiningImage:(id)image withImage:(id)image;
+ (id)tfn_vectorImageNamed:(id)named highContrastVariantNamed:(id)named fitsSize:(struct CGSize { double x0; double x1; })size fillColor:(id)color;
+ (id)tfn_vectorImageNamed:(id)named fitsSize:(struct CGSize { double x0; double x1; })size fixedFillColor:(id)color;
+ (_Bool)tfn_vectorImageExistsNamed:(id)named fitsSize:(struct CGSize { double x0; double x1; })size size:(out struct CGSize { double x0; double x1; } *)size;
+ (id)_tfn_vectorImageOverrideDocumentNamed:(id)named;
+ (id)_tfn_vectorImageDocumentNamed:(id)named;
+ (id)_tfn_vectorImageNamed:(id)named highContrastVariantNamed:(id)named fitsSize:(struct CGSize { double x0; double x1; })size fillColor:(id)color addDynamicColorInfo:(_Bool)info;
+ (id)_tfn_vectorImageNamed:(id)named highContrastVariantNamed:(id)named fitsSize:(struct CGSize { double x0; double x1; })size fillColor:(id)color useHighContrast:(_Bool)contrast addDynamicColorInfo:(_Bool)info;
+ (id)tfn_vectorImageNamed:(id)named insetIntoPointSize:(struct CGSize { double x0; double x1; })size sizingCoefficient:(double)coefficient fillColor:(id)color;
+ (id)_tfn_vectorImageFallbackCache;
+ (id)_tfn_vectorImageFallbackCacheKeyNamed:(id)named fitsSize:(struct CGSize { double x0; double x1; })size fillColor:(id)color;
+ (id)_tfn_vectorImageFallbackImageNamed:(id)named;
+ (id)_tfn_vectorImageCachedFallbackSourceSizeNamed:(id)named;
+ (void)_tfn_vectorImageSetCachedFallbackSourceSize:(struct CGSize { double x0; double x1; })size named:(id)named;
+ (struct CGSize { double x0; double x1; })_tfn_vectorImageSizeFitting:(struct CGSize { double x0; double x1; })fitting sourceSize:(struct CGSize { double x0; double x1; })size;
+ (_Bool)_tfn_vectorImageIsYouTubeLogoNamed:(id)named;
+ (id)_tfn_imageByTintingNonWhitePixelsInImage:(id)image targetSize:(struct CGSize { double x0; double x1; })size fillColor:(id)color;
+ (id)_tfn_vectorImageFromFallbackBundleNamed:(id)named fitsSize:(struct CGSize { double x0; double x1; })size fillColor:(id)color;
+ (id)_tfn_vectorImageDocumentCacheQueue;
+ (id)_tfn_vectorImageDocumentCache;
+ (id)_tfn_vectorImageCachedDocumentNamed:(id)named;
+ (void)_tfn_vectorImageSetCachedDocument:(id)document named:(id)named;
+ (void)_tfn_vectorImageClearCachedDocuments;
+ (id)tfnui_imageNamed:(id)named;
+ (id)tfn_imageNamed:(id)named inBundle:(id)bundle;
+ (id)tfn_imageWithSize:(struct CGSize { double x0; double x1; })size backgroundColor:(id)color;
+ (id)tfn_roundRectImageWithCornerRadius:(double)radius backgroundColor:(id)color;
+ (id)tfn_cutoutTextImageWithString:(id)string font:(id)font insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets cornerRadius:(double)radius backgroundColor:(id)color;
+ (id)tfn_textImageWithString:(id)string font:(id)font insets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets cornerRadius:(double)radius backgroundColor:(id)color textColor:(id)color;
+ (id)tfn_systemEmojiImageFromString:(id)string fitsSize:(struct CGSize { double x0; double x1; })size;
+ (id)tfn_systemEmojiImageNamed:(id)named fitsSize:(struct CGSize { double x0; double x1; })size;
+ (struct CGSize { double x0; double x1; })tfn_sizeForImageWithSize:(struct CGSize { double x0; double x1; })size inRectWithSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tfn_frameForImageWithSize:(struct CGSize { double x0; double x1; })size inRectWithSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tfn_frameForImageWithSize:(struct CGSize { double x0; double x1; })size inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withContentMode:(long long)mode;
+ (id)tfn_imageForRectWithSize:(struct CGSize { double x0; double x1; })size color:(id)color;
+ (id)tfn_imageForColor:(id)color;
+ (id)tfn_imageFromView:(id)view;
+ (id)tip_imageWithImageSource:(struct CGImageSource *)source atIndex:(unsigned long long)index;
+ (id)tip_imageWithImageSource:(struct CGImageSource *)source atIndex:(unsigned long long)index targetDimensions:(struct CGSize { double x0; double x1; })dimensions targetContentMode:(long long)mode;
+ (id)tip_imageWithAnimatedImageSource:(struct CGImageSource *)source durations:(out id *)durations loopCount:(out unsigned long long *)count;
+ (id)tip_imageWithAnimatedImageSource:(struct CGImageSource *)source targetDimensions:(struct CGSize { double x0; double x1; })dimensions targetContentMode:(long long)mode durations:(out id *)durations loopCount:(out unsigned long long *)count;
+ (id)tip_thumbnailImageWithImageSource:(struct CGImageSource *)source thumbnailMaximumDimension:(double)dimension;
+ (id)tip_thumbnailImageWithData:(id)data thumbnailMaximumDimension:(double)dimension;
+ (id)tip_thumbnailImageWithFileURL:(id)url thumbnailMaximumDimension:(double)dimension;
+ (id)tip_thumbnailImageWithFileURL:(id)url thumbnailMaximumDimension:(double)dimension maximumDesiredPeakMemoryUsage:(unsigned long long)usage;
+ (id)tip_imageWithAnimatedImageFile:(id)file durations:(out id *)durations loopCount:(out unsigned long long *)count;
+ (id)tip_imageWithAnimatedImageFile:(id)file targetDimensions:(struct CGSize { double x0; double x1; })dimensions targetContentMode:(long long)mode durations:(out id *)durations loopCount:(out unsigned long long *)count;
+ (id)tip_imageWithAnimatedImageData:(id)data durations:(out id *)durations loopCount:(out unsigned long long *)count;
+ (id)tip_imageWithAnimatedImageData:(id)data targetDimensions:(struct CGSize { double x0; double x1; })dimensions targetContentMode:(long long)mode durations:(out id *)durations loopCount:(out unsigned long long *)count;

/* instance methods */
- (id)gid_imageWithBlendMode:(int)mode color:(id)color;
- (id)tfn_imageFlippedForRightToLeftTransform;
- (id)tfn_dynamicColors;
- (void)setTfn_dynamicColors:(id)colors;
- (id)tfn_dynamicColorImageName;
- (void)setTfn_dynamicColorImageName:(id)name;
- (id /* block */)tfn_dynamicColorImageRegenerator;
- (void)setTfn_dynamicColorImageRegenerator:(id /* block */)regenerator;
- (void)tfn_addDynamicColorStateForColors:(id)colors target:(id)target imageGenerator:(id /* block */)generator;
- (id)tfn_resizableImageWithCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets;
- (id)tfn_resizableImageWithCapInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets resizingMode:(long long)mode;
- (id)tfn_stretchableImageWithLeftCapWidth:(double)width topCapHeight:(double)height;
- (id)tfn_imageWithTintColor:(id)color;
- (id)tfn_imageWithTintColor:(id)color blendMode:(int)mode;
- (id)tfn_imageWithAlphaComponent:(double)component;
- (id)tfn_staticImage;
- (id)tfn_horizontallyFlippedImage;
- (id)tfn_cropImageToBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds backgroundColor:(id)color;
- (id)tfn_paddedImageWithTargetDimensions:(struct CGSize { double x0; double x1; })dimensions;
- (id)tfn_borderedImageWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })insets backgroundColor:(id)color cornerRadius:(double)radius;
- (id)tfn_roundImageWithTargetDimensions:(struct CGSize { double x0; double x1; })dimensions targetContentMode:(long long)mode;
- (id)tfn_shadowedImageWithSize:(struct CGSize { double x0; double x1; })size color:(id)color radius:(double)radius;
- (id)tfn_shadowedImageWithSize:(struct CGSize { double x0; double x1; })size color:(id)color radius:(double)radius setAlignmentRectInsets:(_Bool)insets;
- (id)_tfn_proportionalImageWithWidth:(long long)width;
- (id)_tfn_fixOrientationConstrainToSize:(long long)size;
- (id)_tfn_fixOrientationConstrainToSize:(long long)size compress:(double)compress;
- (struct CGSize { double x0; double x1; })tfn_sizeInRectWithSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tfn_frameInRectWithSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })tfn_frameInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect withContentMode:(long long)mode;
- (id)tfn_imageForRectWithSize:(struct CGSize { double x0; double x1; })size contentMode:(long long)mode;
- (id)tfn_resizableImageWithDefaultInsets;
- (void)tfn_decompressImage;
- (id)tfn_cropImage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })image;
- (id)tip_PNGRepresentation;
- (id)tip_JPEGRepresentationWithQuality:(float)quality progressive:(_Bool)progressive;
- (_Bool)tip_writeToCGImageDestination:(struct CGImageDestination *)destination type:(id)type encodingOptions:(long long)options quality:(float)quality animationLoopCount:(unsigned long long)count animationFrameDurations:(id)durations error:(out id *)error;
- (struct CGSize { double x0; double x1; })tip_dimensions;
- (struct CGSize { double x0; double x1; })tip_pointSize;
- (unsigned long long)tip_estimatedSizeInBytes;
- (unsigned long long)tip_imageCountBasedOnImageType:(id)type;
- (_Bool)tip_hasAlpha:(_Bool)alpha;
- (_Bool)tip_usesWideGamutColorSpace;
- (_Bool)tip_canLosslesslyEncodeUsingIndexedPaletteWithOptions:(long long)options;
- (id)tip_recommendedImageType:(long long)type;
- (_Bool)tip_matchesTargetDimensions:(struct CGSize { double x0; double x1; })dimensions contentMode:(long long)mode;
- (id)tip_imageWithRenderFormatting:(id /* block */)formatting render:(id /* block */)render;
- (id)tip_scaledImageWithTargetDimensions:(struct CGSize { double x0; double x1; })dimensions contentMode:(long long)mode;
- (id)tip_scaledImageWithTargetDimensions:(struct CGSize { double x0; double x1; })dimensions contentMode:(long long)mode interpolationQuality:(id)quality decode:(_Bool)decode;
- (id)tip_orientationAdjustedImage;
- (id)tip_imageByUpdatingScale:(double)scale;
- (id)tip_CGImageBackedImageAndReturnError:(out id *)error;
- (id)tip_grayscaleImage;
- (id)tip_blurredImageWithRadius:(double)radius;
- (id)tip_imageWithBlurWithRadius:(double)radius tintColor:(id)color saturationDeltaFactor:(double)factor maskImage:(id)image;
- (_Bool)tip_writeToCGImageDestinationWithBlock:(id /* block */)block type:(id)type encodingOptions:(long long)options quality:(float)quality animationLoopCount:(unsigned long long)count animationFrameDurations:(id)durations error:(out id *)error;
- (id)tip_writeToDataWithType:(id)type encodingOptions:(long long)options quality:(float)quality animationLoopCount:(unsigned long long)count animationFrameDurations:(id)durations error:(out id *)error;
- (_Bool)tip_writeToFile:(id)file type:(id)type encodingOptions:(long long)options quality:(float)quality animationLoopCount:(unsigned long long)count animationFrameDurations:(id)durations atomically:(_Bool)atomically error:(out id *)error;
- (void)tip_decode;

@end

#endif /* UIImage_TIPAdditions_h */
