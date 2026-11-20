//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVAnchoredModalContainerView_h
#define PTVAnchoredModalContainerView_h
@import Foundation;

#include "PTVAnchoredModalContainerViewDelegate-Protocol.h"

@class UIView;

@interface PTVAnchoredModalContainerView : UIView {
    /* instance variables */
    id <PTVAnchoredModalContainerViewDelegate> _delegate;
}

@property (readonly, nonatomic) UIView *contentView;

/* class methods */
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })AnchoredFrame:(struct CGSize { double x0; double x1; })frame ContainerSize:(struct CGSize { double x0; double x1; })size TraitCollection:(id)collection;

/* instance methods */
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame contentView:(id)view delegate:(id)delegate;
- (void)tapOccurred:(id)occurred;
- (void)dismiss;

@end

#endif /* PTVAnchoredModalContainerView_h */
