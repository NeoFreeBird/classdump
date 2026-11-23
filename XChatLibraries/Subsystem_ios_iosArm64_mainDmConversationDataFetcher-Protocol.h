//
#ifndef Subsystem_ios_iosArm64_mainDmConversationDataFetcher_Protocol_h
#define Subsystem_ios_iosArm64_mainDmConversationDataFetcher_Protocol_h
@import Foundation;

@protocol Subsystem_ios_iosArm64_mainDmConversationDataFetcher

@required

/* required instance methods */
- (void)fetchConversationDataConvId:(id)id completionHandler:(id /* block */)handler;
- (void)fetchConversationDataConvId:(id)id completionHandler:(id /* block */)handler;
- (void)fetchLegacyConversationDataConvId:(id)id completionHandler:(id /* block */)handler;
- (void)fetchLegacyConversationDataConvId:(id)id completionHandler:(id /* block */)handler;

@optional

@end

#endif /* Subsystem_ios_iosArm64_mainDmConversationDataFetcher_Protocol_h */
