//
#ifndef TFNTwitterStatusConversationTreeContext_Protocol_h
#define TFNTwitterStatusConversationTreeContext_Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol TFNTwitterStatusConversationTreeContext <NSObject>

@required

@property (nonatomic, readonly) long long indentationLevel;
@property (nonatomic, readonly) _Bool shouldShowElbowParentConnectorView;
@property (nonatomic, readonly) _Bool shouldShowVerticalParentConnectorView;
@property (nonatomic, readonly) _Bool isTweetStormContext;
@property (nonatomic, readonly) _Bool isFirstTweet;
@property (nonatomic, readonly) _Bool isTreeSingleReplyBranch;
@property (nonatomic, readonly) _Bool isSingleItemTree;
@property (nonatomic, readonly) _Bool usesContentInsetForAncestorConnectorHeight;

/* required instance methods */
- (_Bool)shouldShowAncestorConnectorAtLevel:(unsigned long long)level;
- (_Bool)shouldShowAncestorConnectorAtLevel:(unsigned long long)level;

@optional

@end

#endif /* TFNTwitterStatusConversationTreeContext_Protocol_h */
