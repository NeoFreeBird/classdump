//
#ifndef PTVVideoAccessManagerDelegate_Protocol_h
#define PTVVideoAccessManagerDelegate_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol PTVVideoAccessManagerDelegate <NSObject>

@required

@optional

/* optional instance methods */
- (void)videoAccessManager:(id)manager didLogEvent:(id)event;
- (void)videoAccessManager:(id)manager didUpdateVideoAccess:(id)access previousVideoAccess:(id)access;
- (void)videoAccessManager:(id)manager didFailToFetchVideoAccessWithError:(id)error;

@end

#endif /* PTVVideoAccessManagerDelegate_Protocol_h */
