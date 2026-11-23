//
#ifndef TFNLayoutableViewLayoutDelegate_Protocol_h
#define TFNLayoutableViewLayoutDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNLayoutableViewLayoutDelegate <NSObject>

@required

/* required instance methods */
- (void)layoutSubviewsForLayoutableView:(id)view;

@optional

/* optional instance methods */
- (struct CGSize { double x0; double x1; })layoutableView:(id)view sizeThatFits:(struct CGSize { double x0; double x1; })fits;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForLayoutableView:(id)view;

@end

#endif /* TFNLayoutableViewLayoutDelegate_Protocol_h */
