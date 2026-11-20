//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
