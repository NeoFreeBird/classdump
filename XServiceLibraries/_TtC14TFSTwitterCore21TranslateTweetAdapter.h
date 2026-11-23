//
#ifndef _TtC14TFSTwitterCore21TranslateTweetAdapter_h
#define _TtC14TFSTwitterCore21TranslateTweetAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.TranslateTweetAdapter : NSObject // (Swift)

/* class methods */
+ (void)translateWithActionService:(id)service statusID:(long long)id translationSource:(id)source completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore21TranslateTweetAdapter_h */
