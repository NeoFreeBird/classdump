//
#ifndef UIDynamicItem_Protocol_h
#define UIDynamicItem_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIBezierPath;

@protocol UIDynamicItem <NSObject>

@required

@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (nonatomic, readonly) unsigned long long collisionBoundsType;
@property (nonatomic, readonly) UIBezierPath *collisionBoundingPath;

@optional

@end

#endif /* UIDynamicItem_Protocol_h */
