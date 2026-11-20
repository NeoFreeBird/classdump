//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef T1BlockOrReportChatMessageConversationMode_h
#define T1BlockOrReportChatMessageConversationMode_h
@import Foundation;

#include "T1BlockOrReportMode-Protocol.h"

@class NSObject, NSString;

@interface T1BlockOrReportChatMessageConversationMode : NSObject <T1BlockOrReportMode>

@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *messageID;
@property (readonly, nonatomic) long long reportedUserID;
@property (readonly, copy, nonatomic) NSString *sequenceNumber;
@property (readonly, nonatomic) NSString *reportScribeElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

/* instance methods */
- (id)initWithConversationID:(id)id messageID:(id)id reportedUserID:(long long)id sequenceNumber:(id)number;
- (void)setParams:(id)params inContext:(id)context;
- (void)actionDidCompleteInContext:(id)context;
- (id)userReferenceForID:(long long)id;
- (_Bool)shouldUseNativeReportingForContext:(id)context account:(id)account;

@end

#endif /* T1BlockOrReportChatMessageConversationMode_h */
