//
#ifndef TFSAuthAPIResponse_Protocol_h
#define TFSAuthAPIResponse_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@class NSError, NSString;

@protocol TFSAuthAPIResponse <NSObject>

@required

@property (nonatomic, readonly) _Bool success;
@property (nonatomic, readonly) NSError *signError;
@property (nonatomic, readonly) NSError *apiError;
@property (nonatomic, readonly) long long statusCode;
@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) unsigned long long authType;
@property (nonatomic, readonly) unsigned long long startMachTime;

@optional

@end

#endif /* TFSAuthAPIResponse_Protocol_h */
