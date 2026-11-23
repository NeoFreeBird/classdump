//
#ifndef SKRequestDelegate_Protocol_h
#define SKRequestDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol SKRequestDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)requestDidFinish:(id)finish;
- (void)request:(id)request didFailWithError:(id)error;

@end

#endif /* SKRequestDelegate_Protocol_h */
