//
#ifndef _TtC14T1TwitterSwift27TweetStormTreeRenderContext_h
#define _TtC14T1TwitterSwift27TweetStormTreeRenderContext_h
@import Foundation;

#include "TFNTwitterStatusConversationTreeContext-Protocol.h"

@class NSObject, Swift.Bool, _$sSi;

@interface T1TwitterSwift.TweetStormTreeRenderContext : NSObject <TFNTwitterStatusConversationTreeContext> // (Swift)

@property (nonatomic, readonly) _Bool isFirstTweet;
@property (nonatomic, readonly) long long indentationLevel;
@property (nonatomic, readonly) _Bool shouldShowElbowParentConnectorView;
@property (nonatomic, readonly) _Bool shouldShowVerticalParentConnectorView;
@property (nonatomic, readonly) _Bool isTweetStormContext;
@property (nonatomic, readonly) _Bool isTreeSingleReplyBranch;
@property (nonatomic, readonly) _Bool isSingleItemTree;
@property (nonatomic, readonly) _Bool usesContentInsetForAncestorConnectorHeight;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (id)init;
- (_Bool)shouldShowAncestorConnectorAtLevel:(unsigned long long)level;
- (_Bool)isEqual:(id)equal;

@end

#endif /* _TtC14T1TwitterSwift27TweetStormTreeRenderContext_h */
