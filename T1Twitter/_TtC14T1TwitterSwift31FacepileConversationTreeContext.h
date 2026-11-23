//
#ifndef _TtC14T1TwitterSwift31FacepileConversationTreeContext_h
#define _TtC14T1TwitterSwift31FacepileConversationTreeContext_h
@import Foundation;

#include "TFNTwitterStatusConversationTreeContext-Protocol.h"

@class NSObject, Swift.Bool, _$sSa -> _$ss5Int64VMn userID_SS8fullNameSS9avatarUrlt;

@interface T1TwitterSwift.FacepileConversationTreeContext : NSObject <TFNTwitterStatusConversationTreeContext> { // (Swift)
    /* instance variables */
    Swift.Array -> nominal type descriptor for Swift.Int64 userID_SS8fullNameSS9avatarUrlt facepileDetails;
    Swift.Bool isPrecededByAncestor;
}

@property (nonatomic, readonly) _Bool usesContentInsetForAncestorConnectorHeight;
@property (nonatomic, readonly) long long indentationLevel;
@property (nonatomic, readonly) _Bool shouldShowElbowParentConnectorView;
@property (nonatomic, readonly) _Bool shouldShowVerticalParentConnectorView;
@property (nonatomic, readonly) _Bool isTweetStormContext;
@property (nonatomic, readonly) _Bool isFirstTweet;
@property (nonatomic, readonly) _Bool isTreeSingleReplyBranch;
@property (nonatomic, readonly) _Bool isSingleItemTree;

/* instance methods */
- (_Bool)shouldShowAncestorConnectorAtLevel:(unsigned long long)level;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift31FacepileConversationTreeContext_h */
