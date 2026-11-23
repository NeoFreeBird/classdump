//
#ifndef T1StandardStatusInlineExpansionHelper_h
#define T1StandardStatusInlineExpansionHelper_h
@import Foundation;

@class NSObject;

@interface T1StandardStatusInlineExpansionHelper : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *expandedStatusIDs;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (_Bool)setExpanded:(_Bool)expanded forViewModel:(id)model atIndexPath:(id)path inController:(id)controller animationEnabled:(_Bool)enabled;
- (_Bool)isExpanded:(id)expanded;

@end

#endif /* T1StandardStatusInlineExpansionHelper_h */
