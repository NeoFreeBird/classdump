//
#ifndef TLSDataRetrieval_Protocol_h
#define TLSDataRetrieval_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TLSDataRetrieval <NSObject>

@required

@property (readonly, nonatomic) unsigned long long tls_loggedDataEncoding;

/* required instance methods */
- (id)tls_retrieveLoggedData:(unsigned long long)data;

@optional

@end

#endif /* TLSDataRetrieval_Protocol_h */
