//
#ifndef T1SearchKeyCommandSupportProtocol_Protocol_h
#define T1SearchKeyCommandSupportProtocol_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol T1SearchKeyCommandSupportProtocol <NSObject>

@required

/* required instance methods */
- (_Bool)canHandleSearchKeyCommand;
- (void)handleSearchKeyCommand;

@optional

@end

#endif /* T1SearchKeyCommandSupportProtocol_Protocol_h */
