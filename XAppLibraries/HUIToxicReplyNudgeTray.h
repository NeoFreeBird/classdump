//
#ifndef HUIToxicReplyNudgeTray_h
#define HUIToxicReplyNudgeTray_h
@import Foundation;

@class NSObject;

@interface HUIToxicReplyNudgeTray : NSObject // (Swift)

/* class methods */
+ (id)makeTrayWithTitle:(id)title message:(id)message preview:(id)preview onPost:(id /* block */)post onDelete:(id /* block */)_delete onDismiss:(id /* block */)dismiss;

/* instance methods */
- (id)init;

@end

#endif /* HUIToxicReplyNudgeTray_h */
