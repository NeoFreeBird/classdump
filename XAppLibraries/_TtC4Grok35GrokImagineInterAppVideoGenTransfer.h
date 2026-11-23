//
#ifndef _TtC4Grok35GrokImagineInterAppVideoGenTransfer_h
#define _TtC4Grok35GrokImagineInterAppVideoGenTransfer_h
@import Foundation;

@class NSObject;

@interface Grok.GrokImagineInterAppVideoGenTransfer : NSObject // (Swift)

/* class methods */
+ (void)transferWithHUD:(id)hud controller:(id)controller source:(long long)source grokFeatureAccess:(id)access attachmentID:(id)id parentXPostID:(id)id accountID:(id)id;
+ (void)transferWithHUDWithGrokFeatureAccess:(id)access controller:(id)controller source:(long long)source attachmentID:(id)id parentXPostID:(id)id accountID:(id)id imageFetcher:(id /* block */)fetcher;

/* instance methods */
- (id)init;

@end

#endif /* _TtC4Grok35GrokImagineInterAppVideoGenTransfer_h */
