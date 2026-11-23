//
#ifndef T1AltTextPrompt_h
#define T1AltTextPrompt_h
@import Foundation;

@class NSObject;

@interface T1AltTextPrompt : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *scribe;
    NSNumber"16@0:8 *didTapAddDescriptions;
    NSNumber"16@0:8 *didTapNotNow;
    NSNumber"16@0:8 *hasPerformedTapAction;
}

/* class methods */
+ (void)presentFromViewController:(id)controller missingAltTextImageCount:(long long)count totalImageCount:(long long)count scribe:(id)scribe didTapAddDescriptions:(id /* block */)descriptions didTapNotNow:(id /* block */)now;

/* instance methods */
- (id)init;

@end

#endif /* T1AltTextPrompt_h */
