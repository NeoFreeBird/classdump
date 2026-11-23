//
#ifndef GADNetworkServerTransactionSource_h
#define GADNetworkServerTransactionSource_h
@import Foundation;

#include "GADServerTransactionSource-Protocol.h"

@class NSObject, NSString;

@interface GADNetworkServerTransactionSource : NSObject <GADServerTransactionSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* class methods */
+ (id)sharedURLSession;

/* instance methods */
- (void)handleServerResponse:(id)response body:(id)body serverRequest:(id)request completionHandler:(id /* block */)handler;
- (void)createServerTransactionForServerRequest:(id)request completionHandler:(id /* block */)handler;

@end

#endif /* GADNetworkServerTransactionSource_h */
