//
#ifndef TFNToastContentViewable_Protocol_h
#define TFNToastContentViewable_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNToastContentViewDelegate-Protocol.h"
#include "TFNToastViewModel-Protocol.h"

@protocol TFNToastContentViewable <NSObject>

@required

@property (nonatomic, readonly) id <TFNToastViewModel> toast;
@property (nonatomic, weak) id <TFNToastContentViewDelegate> delegate;

/* required instance methods */
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame toast:(id)toast;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@optional

/* optional instance methods */
- (void)didPresentContentViewWithInterval:(double)interval;
- (void)didPresentContentViewWithInterval:(double)interval;

@end

#endif /* TFNToastContentViewable_Protocol_h */
