//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
