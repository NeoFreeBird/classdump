//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift35PollCardDisplayUIViewLayoutDelegate_h
#define _TtC14T1TwitterSwift35PollCardDisplayUIViewLayoutDelegate_h
@import Foundation;

@class TUICardViewLayoutDelegate;

@interface T1TwitterSwift.PollCardDisplayUIViewLayoutDelegate : TUICardViewLayoutDelegate // (Swift)

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)viewModelWithCardContext:(id)context;

/* instance methods */
- (id)layoutForCardContext:(id)context layoutMetrics:(id)metrics withPreviousLayoutState:(id)state;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift35PollCardDisplayUIViewLayoutDelegate_h */
