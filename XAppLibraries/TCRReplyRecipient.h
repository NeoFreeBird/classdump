//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TCRReplyRecipient_h
#define TCRReplyRecipient_h
@import Foundation;

#include "TFSTwitterCanonicalUser-Protocol.h"

@class NSObject, NSString;

@interface TCRReplyRecipient : NSObject

@property (readonly, nonatomic) long long userID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *handle;
@property (readonly, nonatomic) _Bool locked;
@property (readonly, nonatomic) _Bool included;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> user;

/* instance methods */
- (id)initWithUserID:(long long)id name:(id)name handle:(id)handle locked:(_Bool)locked included:(_Bool)included user:(id)user;
- (_Bool)isEqual:(id)equal;
- (unsigned long long)hash;
- (_Bool)isLocked;
- (_Bool)isIncluded;

@end

#endif /* TCRReplyRecipient_h */
