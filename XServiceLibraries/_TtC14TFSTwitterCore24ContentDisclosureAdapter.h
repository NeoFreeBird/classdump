//
#ifndef _TtC14TFSTwitterCore24ContentDisclosureAdapter_h
#define _TtC14TFSTwitterCore24ContentDisclosureAdapter_h
@import Foundation;

#include "TASActionService.h"
#include "TFSModelContext.h"

@class NSObject;

@interface TFSTwitterCore.ContentDisclosureAdapter : NSObject // (Swift)

/* class methods */
+ (void)addContentDisclosureWithActionService:(TASActionService *)service tweetID:(long long)id hasPaidPromotionDisclosure:(_Bool)disclosure hasAIGeneratedDisclosure:(_Bool)disclosure aiGeneratedDetectionSource:(long long)source modelContext:(TFSModelContext *)context completionHandler:(id /* block */)handler;
+ (void)deleteContentDisclosureWithActionService:(TASActionService *)service tweetID:(long long)id modelContext:(TFSModelContext *)context completionHandler:(id /* block */)handler;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore24ContentDisclosureAdapter_h */
