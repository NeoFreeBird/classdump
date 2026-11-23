//
#ifndef TFNPopoverSourceInfo_h
#define TFNPopoverSourceInfo_h
@import Foundation;

@class NSObject, UIBarButtonItem, UIView;

@interface TFNPopoverSourceInfo : NSObject

@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, nonatomic) UIView *sourceView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;

/* class methods */
+ (id)infoWithBarButtonItem:(id)item;
+ (id)infoWithSourceView:(id)view rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
+ (id)infoWithSourceView:(id)view;
+ (id)infoWithCenteredPresentation;

/* instance methods */
- (id)init;
- (id)initWithBarButtonItem:(id)item sourceView:(id)view rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void)applyToSpecification:(id)specification;

@end

#endif /* TFNPopoverSourceInfo_h */
