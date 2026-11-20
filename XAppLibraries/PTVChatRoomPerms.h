//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef PTVChatRoomPerms_h
#define PTVChatRoomPerms_h
@import Foundation;

#include "NSSecureCoding-Protocol.h"

@class NSObject;

@interface PTVChatRoomPerms : NSObject <NSSecureCoding>

@property (readonly, nonatomic) int chatman;

/* class methods */
+ (_Bool)supportsSecureCoding;

/* instance methods */
- (id)initWithDict:(id)dict;
- (id)initWithCoder:(id)coder;
- (void)encodeWithCoder:(id)coder;
- (_Bool)chatManAllowed;

@end

#endif /* PTVChatRoomPerms_h */
