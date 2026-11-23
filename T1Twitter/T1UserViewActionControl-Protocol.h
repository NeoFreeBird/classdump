//
#ifndef T1UserViewActionControl_Protocol_h
#define T1UserViewActionControl_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class TFSTwitterScribeContext;

@protocol T1UserViewActionControl <NSObject>

@required

@property (nonatomic, copy) TFSTwitterScribeContext *scribeContext;

@optional

@end

#endif /* T1UserViewActionControl_Protocol_h */
