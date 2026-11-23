//
#ifndef _TtC14T1TwitterSwift32DirectMessageCardViewLayoutState_h
#define _TtC14T1TwitterSwift32DirectMessageCardViewLayoutState_h
@import Foundation;

@class TUICardViewLayoutState, __C.CGRect;

@interface T1TwitterSwift.DirectMessageCardViewLayoutState : TUICardViewLayoutState { // (Swift)
    /* instance variables */
    __C.CGRect primaryImageFrame;
    __C.CGRect primaryImageHighlightFrame;
    __C.CGRect borderSeparatorFrame;
    __C.CGRect recipientUserFrame;
    __C.CGRect recipientUserHighlightFrame;
    __C.CGRect ctaContainerViewFrame;
    __C.CGRect dominantColorViewFrame;
}

/* instance methods */
- (_Bool)isLayoutStateValidForCardContext:(id)context;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift32DirectMessageCardViewLayoutState_h */
