//
#ifndef T1PostTranslationHelper_h
#define T1PostTranslationHelper_h
@import Foundation;

@class NSObject;

@interface T1PostTranslationHelper : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *cache;
}

/* class methods */
+ (id)shared;

/* instance methods */
- (id)init;
- (id)getOrCreateInfoFor:(id)_for;
- (id)getInfoFor:(id)_for;
- (id)getInfoForStatusID:(long long)id;
- (void)setInfo:(id)info for:(id)_for;

@end

#endif /* T1PostTranslationHelper_h */
