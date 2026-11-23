//
#ifndef T1PhotoSelection_h
#define T1PhotoSelection_h
@import Foundation;

@class NSObject, TTMAssetImage, UIImage;

@interface T1PhotoSelection : NSObject

@property (readonly, nonatomic) UIImage *image;
@property (readonly, nonatomic) TTMAssetImage *originalMediaAsset;

/* instance methods */
- (id)initWithImage:(id)image orignalMediaAsset:(id)asset;

@end

#endif /* T1PhotoSelection_h */
