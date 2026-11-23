//
#ifndef TFNKeyboardObserverKeyboardState_h
#define TFNKeyboardObserverKeyboardState_h
@import Foundation;

@class NSObject;
@protocol UICoordinateSpace;

@interface TFNKeyboardObserverKeyboardState : NSObject

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly, nonatomic) id <UICoordinateSpace> coordinateSpace;
@property (readonly, nonatomic) _Bool local;

/* instance methods */
- (id)description;
- (_Bool)isEqual:(id)equal;
- (_Bool)isLocal;

@end

#endif /* TFNKeyboardObserverKeyboardState_h */
