//
#ifndef T1AccountAdder_Protocol_h
#define T1AccountAdder_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1AccountAdder <NSObject>

@required

@property (copy, nonatomic) id /* block */ didAddAccountBlock;

@optional

@end

#endif /* T1AccountAdder_Protocol_h */
