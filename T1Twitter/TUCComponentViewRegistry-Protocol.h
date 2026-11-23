//
#ifndef TUCComponentViewRegistry_Protocol_h
#define TUCComponentViewRegistry_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TUCComponentViewRegistry <NSObject>

@required

/* required instance methods */
- (id)viewForComponent:(id)component;
- (Class)viewClassForComponent:(id)component;
- (id)layoutDelegateForComponent:(id)component;
- (id /* block */)configurationBlockForComponent:(id)component;

@optional

@end

#endif /* TUCComponentViewRegistry_Protocol_h */
