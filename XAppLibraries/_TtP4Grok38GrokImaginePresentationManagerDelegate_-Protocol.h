//
#ifndef _TtP4Grok38GrokImaginePresentationManagerDelegate__Protocol_h
#define _TtP4Grok38GrokImaginePresentationManagerDelegate__Protocol_h
@import Foundation;

#include "NSObject-Protocol.h"

@protocol Grok.GrokImaginePresentationManagerDelegate <NSObject>

@required

/* required instance methods */
- (void)grokImaginePresentationManagerWillOpenUpsell:(id)upsell referringPage:(id)page thresholdTier:(id)tier;
- (void)grokImaginePresentationManagerAttachmentDidAdd:(id)add asset:(id)asset withPrompt:(id)prompt;

@optional

@end

#endif /* _TtP4Grok38GrokImaginePresentationManagerDelegate__Protocol_h */
