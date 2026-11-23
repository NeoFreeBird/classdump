//
#ifndef TFSTwitterLiveAuthorizedStreamStatus_h
#define TFSTwitterLiveAuthorizedStreamStatus_h
@import Foundation;

#include "TFSTwitterLiveAuthorizedStreamStatusSource.h"

@class NSArray, NSObject, NSString, NSURL;

@interface TFSTwitterLiveAuthorizedStreamStatus : NSObject

@property (readonly, nonatomic) TFSTwitterLiveAuthorizedStreamStatusSource *source;
@property (readonly, copy, nonatomic) NSString *sessionId;
@property (readonly, copy, nonatomic) NSString *chatToken;
@property (readonly, copy, nonatomic) NSString *lifecycleToken;
@property (readonly, copy, nonatomic) NSURL *shareURL;
@property (readonly, copy, nonatomic) NSString *chatPermissionType;
@property (readonly, nonatomic) _Bool liveChatReadOnly;
@property (readonly, copy, nonatomic) NSArray *restrictions;

/* class methods */
+ (id)streamStatusWithJSONData:(id)jsondata error:(out id *)error;

/* instance methods */
- (id)init;
- (id)initWithSource:(id)source sessionId:(id)id chatToken:(id)token lifecycleToken:(id)token shareURL:(id)url chatPermissionType:(id)type liveChatReadOnly:(_Bool)only restrictions:(id)restrictions;
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterLiveAuthorizedStreamStatus_h */
