//
#ifndef TAFBottomOverlayContentViewable_Protocol_h
#define TAFBottomOverlayContentViewable_Protocol_h
@import Foundation;

#include "TAFBottomOverlayContentViewableDelegate-Protocol.h"

@protocol TAFBottomOverlayContentViewable

@required

@property (nonatomic, retain) id <TAFBottomOverlayContentViewableDelegate> delegate;

/* class methods */
+ (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })fits;

@optional

@end

#endif /* TAFBottomOverlayContentViewable_Protocol_h */
