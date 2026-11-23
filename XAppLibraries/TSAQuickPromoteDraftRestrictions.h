//
#ifndef TSAQuickPromoteDraftRestrictions_h
#define TSAQuickPromoteDraftRestrictions_h
@import Foundation;

@class NSObject;

@interface TSAQuickPromoteDraftRestrictions : NSObject { // (Swift)
    /* instance variables */
    @40@0:8:16@24@32 postRestrictions;
}

/* class methods */
+ (id)textRestrictionExplanationForText:(id)text;

/* instance methods */
- (id)initWithFeatureSwitches:(id)switches;
- (_Bool)permitsDraftWithQuote:(_Bool)quote;
- (id)init;

@end

#endif /* TSAQuickPromoteDraftRestrictions_h */
