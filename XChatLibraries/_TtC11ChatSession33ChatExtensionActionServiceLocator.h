//
#ifndef _TtC11ChatSession33ChatExtensionActionServiceLocator_h
#define _TtC11ChatSession33ChatExtensionActionServiceLocator_h
@import Foundation;

#include "TFSHTTPRequestScribeMethods-Protocol.h"
#include "TFSHTTPRequestScribeProvider-Protocol.h"
#include "TFSModelContextProvider-Protocol.h"
#include "_TtP14GraphQLActions21TFSAPISessionProvider_-Protocol.h"
#include "_TtP14GraphQLActions35TFSTwitterAPIRequestContextProvider_-Protocol.h"

@class ChatSession.ChatHTTPRequestScribe, ChatSession.ChatTwitterAPIConfiguration, NSObject, TFSModelContext, _$sSS, _$sSo6TFSAPIC;

@interface ChatSession.ChatExtensionActionServiceLocator : NSObject <GraphQLActions.TFSTwitterAPIRequestContextProvider, TFSHTTPRequestScribeProvider, TFSModelContextProvider, GraphQLActions.TFSAPISessionProvider> { // (Swift)
    /* instance variables */
    Swift.String accountID;
    __C.TFSAPI api;
    ChatSession.ChatTwitterAPIConfiguration apiConfiguration;
    ChatSession.ChatHTTPRequestScribe scribe;
}

@property (nonatomic, readonly) TFSModelContext *modelContext;
@property (nonatomic, readonly) id <TFSHTTPRequestScribeMethods> httpRequestScribe;

/* instance methods */
- (id)apiRequestContextForSource:(unsigned long long)source;
- (id)apiSessionForAuthContext:(id)context;
- (id)init;

@end

#endif /* _TtC11ChatSession33ChatExtensionActionServiceLocator_h */
