//
#ifndef _TtC14TFSTwitterCore22ViewerUserQueryAdapter_h
#define _TtC14TFSTwitterCore22ViewerUserQueryAdapter_h
@import Foundation;

@class NSObject;

@interface TFSTwitterCore.ViewerUserQueryAdapter : NSObject // (Swift)

/* class methods */
+ (id)fetchViewerWithActionService:(id)service userProfileFeatures:(id)features isSubscriptionProductFeaturesForClientEnabled:(_Bool)enabled source:(unsigned long long)source completion:(id /* block */)completion;

/* instance methods */
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore22ViewerUserQueryAdapter_h */
