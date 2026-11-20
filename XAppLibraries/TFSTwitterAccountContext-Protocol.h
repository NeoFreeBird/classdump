//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
