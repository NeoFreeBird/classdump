//
#ifndef TFNPreviewConfiguration_h
#define TFNPreviewConfiguration_h
@import Foundation;

@class NSArray, NSObject, UIView;

@interface TFNPreviewConfiguration : NSObject

@property (copy, nonatomic) id /* block */ previewViewControllerBlock;
@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;
@property (copy, nonatomic) NSArray *actionItems;

/* class methods */
+ (id)configurationWithPreviewViewControllerBlock:(id /* block */)block actionItems:(id)items sourceView:(id)view sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;

/* instance methods */

@end

#endif /* TFNPreviewConfiguration_h */
