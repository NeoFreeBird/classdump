//
#ifndef TFNTwitterStickerImageSetRequestContext_h
#define TFNTwitterStickerImageSetRequestContext_h
@import Foundation;

@class NSObject;

@interface TFNTwitterStickerImageSetRequestContext : NSObject

@property (copy, nonatomic) id /* block */ previewImageCompletion;
@property (copy, nonatomic) id /* block */ finalImageCompletion;
@property (nonatomic) struct CGSize { double x0; double x1; } expectedDimensions;

/* instance methods */

@end

#endif /* TFNTwitterStickerImageSetRequestContext_h */
