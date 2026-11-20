//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1ConversationTreeConnectorsViewModel_h
#define T1ConversationTreeConnectorsViewModel_h
@import Foundation;

#include "TFNTwitterStatusConversationTreeContext-Protocol.h"
#include "TFSTwitterCanonicalUser-Protocol.h"
#include "TTACoreStatusViewModel-Protocol.h"

@class NSObject, TIPImagePipeline;

@interface T1ConversationTreeConnectorsViewModel : NSObject

@property (readonly, nonatomic) long long indentationLevel;
@property (readonly, nonatomic) _Bool shouldShowVerticalParentConnectorView;
@property (readonly, nonatomic) _Bool shouldShowElbowParentConnectorView;
@property (readonly, nonatomic) id <TFNTwitterStatusConversationTreeContext> conversationContext;
@property (readonly, nonatomic) TIPImagePipeline *imagePipeline;
@property (readonly, nonatomic) id <TFSTwitterCanonicalUser> bottomAvatarUser;
@property (readonly, nonatomic) id <TTACoreStatusViewModel> status;

/* instance methods */
- (id)init;
- (id)initWithConversationContext:(id)context imagePipeline:(id)pipeline bottomAvatarUser:(id)user status:(id)status;
- (_Bool)shouldShowAncestorConnectorAtLevel:(unsigned long long)level;
- (_Bool)isTweetStormContext;
- (_Bool)isViewModelRepresentingConversationContext:(id)context;
- (_Bool)isFirstInTree;
- (_Bool)isTreeSingleBranch;
- (_Bool)isEqual:(id)equal;

@end

#endif /* T1ConversationTreeConnectorsViewModel_h */
