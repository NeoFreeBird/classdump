//
#ifndef UIInteraction_Protocol_h
#define UIInteraction_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class UIView;

@protocol UIInteraction <NSObject>

@required

@property (nonatomic, readonly) UIView *view;

/* required instance methods */
- (void)willMoveToView:(id)view;
- (void)willMoveToView:(id)view;
- (void)didMoveToView:(id)view;
- (void)didMoveToView:(id)view;

@optional

@end

#endif /* UIInteraction_Protocol_h */
