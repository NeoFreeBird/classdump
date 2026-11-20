//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TFNMenuSupport_Protocol_h
#define TFNMenuSupport_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNMenuSupport <NSObject>

@required

@property (nonatomic, readonly) _Bool isPreparedToDisplayMenuOnPrimaryAction;
@property (nonatomic, readonly) id /* block */ willDisplayMenuOnPrimaryActionBlock;

/* required instance methods */
- (void)prepareToDisplayMenuOnPrimaryAction;
- (void)populateMenuWithTitle:(id)title actionItems:(id)items;
- (void)populateMenuWithTitle:(id)title actionItems:(id)items;
- (void)populateMenuWithActionItems:(id)items;
- (void)populateMenuWithActionItems:(id)items;

@optional

/* optional instance methods */
- (void)prepareToDisplayMenuOnPrimaryActionWhen:(id /* block */)when;
- (void)prepareToDisplayMenuOnPrimaryActionWhen:(id /* block */)when;

@end

#endif /* TFNMenuSupport_Protocol_h */
