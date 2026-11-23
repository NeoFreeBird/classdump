//
#ifndef GADAdPresenting_Protocol_h
#define GADAdPresenting_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADAdPresenting <NSObject>

@required

/* required instance methods */
- (_Bool)canPresentFromViewController:(id)controller error:(id *)error;
- (void)present;

@optional

@end

#endif /* GADAdPresenting_Protocol_h */
