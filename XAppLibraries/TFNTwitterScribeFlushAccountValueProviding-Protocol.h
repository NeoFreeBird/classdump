//
#ifndef TFNTwitterScribeFlushAccountValueProviding_Protocol_h
#define TFNTwitterScribeFlushAccountValueProviding_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"
#include "TFNTwitterScribe.h"

@class NSString;

@protocol TFNTwitterScribeFlushAccountValueProviding <NSObject>

@required

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) TFNTwitterScribe *scribe;
@property (readonly, nonatomic) long long userID;

@optional

@end

#endif /* TFNTwitterScribeFlushAccountValueProviding_Protocol_h */
