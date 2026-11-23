//
#ifndef T1GrokStatusButtonImpressionLogger_h
#define T1GrokStatusButtonImpressionLogger_h
@import Foundation;

@class NSObject;

@interface T1GrokStatusButtonImpressionLogger : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *account;
    NSNumber"16@0:8 *scribedKeys;
}

/* instance methods */
- (id)initWithAccount:(id)account;
- (void)logImpressionsIfNeededForStatusView:(id)view;
- (id)init;

@end

#endif /* T1GrokStatusButtonImpressionLogger_h */
