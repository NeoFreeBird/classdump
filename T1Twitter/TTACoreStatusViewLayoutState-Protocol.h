//
#ifndef TTACoreStatusViewLayoutState_Protocol_h
#define TTACoreStatusViewLayoutState_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TTACoreStatusViewLayoutState <NSObject>

@required

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;

/* required instance methods */
- (_Bool)isValidAfterStatusUpdate:(id)update;
- (_Bool)isValidAfterExternalUpdateOfType:(long long)type;

@optional

@end

#endif /* TTACoreStatusViewLayoutState_Protocol_h */
