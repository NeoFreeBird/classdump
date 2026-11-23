//
#ifndef GADOMIDAdSessionDelegate_Protocol_h
#define GADOMIDAdSessionDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol GADOMIDAdSessionDelegate <NSObject>

@required

/* required instance methods */
- (void)adSessionDidStart:(id)start;
- (void)adSessionDidFinish:(id)finish;
- (void)adSession:(id)session didRegisterAdView:(id)view;

@optional

@end

#endif /* GADOMIDAdSessionDelegate_Protocol_h */
