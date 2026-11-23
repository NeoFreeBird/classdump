//
#ifndef _TtC14T1TwitterSwift36GuideLiveEventCardViewLayoutDelegate_h
#define _TtC14T1TwitterSwift36GuideLiveEventCardViewLayoutDelegate_h
@import Foundation;

@class T1TwitterSwift.GuideLiveEventCardView, TUICardViewLayoutDelegate;

@interface T1TwitterSwift.GuideLiveEventCardViewLayoutDelegate : TUICardViewLayoutDelegate { // (Swift)
    /* instance variables */
    T1TwitterSwift.GuideLiveEventCardView prototypeCard;
}

/* class methods */
+ (id)sharedLayoutDelegate;
+ (id)viewModelWithCardContext:(id)context;

/* instance methods */
- (id)layoutForViewModel:(id)model layoutMetrics:(id)metrics;
- (void)layoutSubviewsForCardView:(id)view withState:(id)state;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift36GuideLiveEventCardViewLayoutDelegate_h */
