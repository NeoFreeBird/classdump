//
#ifndef TFSTwitterSubscriptionProductFeature_h
#define TFSTwitterSubscriptionProductFeature_h
@import Foundation;

@class NSObject;

@interface TFSTwitterSubscriptionProductFeature : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 restId;
    B24@0:8@"NSString"16 config;
    B24@0:8@"NSString"16 undoTweetSettings;
}

/* class methods */
+ (id)decodeFrom:(id)from;

/* instance methods */
- (id)encode;
- (id)initWithRestId:(id)id config:(id)config undoTweetSettings:(id)settings;
- (id)init;

@end

#endif /* TFSTwitterSubscriptionProductFeature_h */
