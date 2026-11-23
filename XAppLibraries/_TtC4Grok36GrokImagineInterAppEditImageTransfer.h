//
#ifndef _TtC4Grok36GrokImagineInterAppEditImageTransfer_h
#define _TtC4Grok36GrokImagineInterAppEditImageTransfer_h
@import Foundation;

@class NSObject;

@interface Grok.GrokImagineInterAppEditImageTransfer : NSObject // (Swift)

/* class methods */
+ (void)transferWithHUDWithParams:(id)params controller:(id)controller source:(long long)source grokFeatureAccess:(id)access accountID:(id)id;
+ (void)transferWithHUDWithMediaInfos:(id)infos startIndex:(id)index statusID:(id)id statusText:(id)text authorProfileUsername:(id)username authorProfileDisplayName:(id)name authorProfileImageURL:(id)url authorVerificationType:(long long)type controller:(id)controller source:(long long)source grokFeatureAccess:(id)access imagePipeline:(id)pipeline accountID:(id)id;

/* instance methods */
- (id)init;

@end

#endif /* _TtC4Grok36GrokImagineInterAppEditImageTransfer_h */
