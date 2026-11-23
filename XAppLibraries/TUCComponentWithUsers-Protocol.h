//
#ifndef TUCComponentWithUsers_Protocol_h
#define TUCComponentWithUsers_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSArray;

@protocol TUCComponentWithUsers <NSObject>

@required

@property (readonly, nonatomic) NSArray *allUsers;

@optional

@end

#endif /* TUCComponentWithUsers_Protocol_h */
