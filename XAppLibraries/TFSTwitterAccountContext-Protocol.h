//
#ifndef TFSTwitterAccountContext_Protocol_h
#define TFSTwitterAccountContext_Protocol_h
@import Foundation;

@class NSString, TFSModelContext;

@protocol TFSTwitterAccountContext

@required

@property (readonly, copy, nonatomic) NSString *accountID;
@property (readonly, nonatomic) long long userID;
@property (readonly, nonatomic) TFSModelContext *modelContext;

@optional

@end

#endif /* TFSTwitterAccountContext_Protocol_h */
