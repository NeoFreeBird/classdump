//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift31VoiceRoomCardViewLayoutDelegate_h
#define _TtC14T1TwitterSwift31VoiceRoomCardViewLayoutDelegate_h
@import Foundation;

@class TUICardViewLayoutDelegate;

@interface T1TwitterSwift.VoiceRoomCardViewLayoutDelegate : TUICardViewLayoutDelegate // (Swift)

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)viewModelWithCardContext:(id)context;

/* instance methods */
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)layoutSubviewsForCardView:(id)view withState:(id)state;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift31VoiceRoomCardViewLayoutDelegate_h */
