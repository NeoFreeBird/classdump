//
#ifndef TFNPopoverSourceSpecification_Protocol_h
#define TFNPopoverSourceSpecification_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIBarButtonItem, UIView;

@protocol TFNPopoverSourceSpecification <NSObject>

@required

@property (retain, nonatomic) UIView *sourceView;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } sourceRect;
@property (retain, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) _Bool allowCenteredPresentationWithoutSource;

@optional

@end

#endif /* TFNPopoverSourceSpecification_Protocol_h */
