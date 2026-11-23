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
