//
#ifndef TFNMenuSupport_Protocol_h
#define TFNMenuSupport_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNMenuSupport <NSObject>

@required

@property (readonly, nonatomic) _Bool isPreparedToDisplayMenuOnPrimaryAction;

/* required instance methods */
- (void)prepareToDisplayMenuOnPrimaryAction;
- (void)populateMenuWithTitle:(id)title actionItems:(id)items;
- (void)populateMenuWithActionItems:(id)items;

@optional

@property (readonly, copy, nonatomic) id /* block */ willDisplayMenuOnPrimaryActionBlock;

/* optional instance methods */
- (void)prepareToDisplayMenuOnPrimaryActionWhen:(id /* block */)when;

@end

#endif /* TFNMenuSupport_Protocol_h */
