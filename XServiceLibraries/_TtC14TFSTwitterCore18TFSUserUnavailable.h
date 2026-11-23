//
#ifndef _TtC14TFSTwitterCore18TFSUserUnavailable_h
#define _TtC14TFSTwitterCore18TFSUserUnavailable_h
@import Foundation;

#include "TFSURTRichText.h"

@class NSObject, NSString, TFSTwitterCore.TFSUserUnavailable.TFSUserUnavailableReason, TFSURTCore.URTRichText ?, _$sSSSg;

@interface TFSTwitterCore.TFSUserUnavailable : NSObject // (Swift)

@property (nonatomic, readonly) long long unavailableReason;
@property (nonatomic, readonly) TFSURTRichText *unavailableMessage;
@property (nonatomic, readonly) TFSURTRichText *unavailableHeader;
@property (nonatomic, readonly) NSString *message;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore18TFSUserUnavailable_h */
