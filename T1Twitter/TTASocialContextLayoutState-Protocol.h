//
#ifndef TTASocialContextLayoutState_Protocol_h
#define TTASocialContextLayoutState_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTASocialContextLayoutState <NSObject>

@required

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } socialBadgeFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } socialTextFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } caretButtonFrame;
@property (readonly, nonatomic) _Bool socialTextMultipleLines;
@property (readonly, nonatomic) _Bool socialTextMaxLinesExceeded;

/* required instance methods */
- (_Bool)isSocialTextMultipleLines;
- (_Bool)isSocialTextMaxLinesExceeded;

@optional

@property (readonly, nonatomic) long long socialTextAlignment;

@end

#endif /* TTASocialContextLayoutState_Protocol_h */
