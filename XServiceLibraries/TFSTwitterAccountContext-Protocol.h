//
#ifndef TFSTwitterAccountContext_Protocol_h
#define TFSTwitterAccountContext_Protocol_h
@import Foundation;

#include "TFSModelContext.h"

@class NSString;

@protocol TFSTwitterAccountContext

@required

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) long long userID;
@property (nonatomic, readonly) TFSModelContext *modelContext;

@optional

@end

#endif /* TFSTwitterAccountContext_Protocol_h */
