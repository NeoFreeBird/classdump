//
#ifndef T1MediaHeaderVideoCardViewModel_h
#define T1MediaHeaderVideoCardViewModel_h
@import Foundation;

@class NSObject;

@interface T1MediaHeaderVideoCardViewModel : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *shouldAutoAdvance;
    NSNumber"16@0:8 *playerSessionProducer;
    NSNumber"16@0:8 *backgroundImage;
    NSNumber"16@0:8 *account;
}

@property (nonatomic, readonly) double mediaAspectRatio;

/* instance methods */
- (id)initWithAccount:(id)account placeholderImage:(id)image mediaAspectRatio:(double)ratio playerSessionProducer:(id)producer shouldAutoAdvance:(_Bool)advance;
- (id)init;

@end

#endif /* T1MediaHeaderVideoCardViewModel_h */
