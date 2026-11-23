//
#ifndef T1OfferAvailabilityCache_h
#define T1OfferAvailabilityCache_h
@import Foundation;

@class NSObject;

@interface T1OfferAvailabilityCache : NSObject { // (Swift)
    /* instance variables */
    NSNumber"16@0:8 *delayAsToNotInterfereWithHTLStartup;
    NSNumber"16@0:8 *didCheck;
    NSNumber"16@0:8 *productIdentifiers;
}

/* class methods */
+ (_Bool)hasIntroOffer;
+ (void)setHasIntroOffer:(_Bool)offer;
+ (_Bool)hasOfferWith:(id)with;

/* instance methods */
- (id)init;

@end

#endif /* T1OfferAvailabilityCache_h */
