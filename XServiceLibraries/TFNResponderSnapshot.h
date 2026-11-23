//
#ifndef TFNResponderSnapshot_h
#define TFNResponderSnapshot_h
@import Foundation;

@class NSObject, UIResponder;

@interface TFNResponderSnapshot : NSObject

@property (readonly, nonatomic) _Bool wasFirstResponder;
@property (readonly, weak, nonatomic) UIResponder *responder;

/* instance methods */
- (id)initWithResponder:(id)responder;
- (void)tfn_restoreFirstResponderState;

@end

#endif /* TFNResponderSnapshot_h */
