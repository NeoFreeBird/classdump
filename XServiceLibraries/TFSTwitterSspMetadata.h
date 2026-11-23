//
#ifndef TFSTwitterSspMetadata_h
#define TFSTwitterSspMetadata_h
@import Foundation;

@class NSObject, NSString;

@interface TFSTwitterSspMetadata : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 sspMetadata;
}

@property (nonatomic, readonly) _Bool isPrerollEligible;
@property (nonatomic, readonly) NSString *adTagURL;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSTwitterSspMetadata_h */
