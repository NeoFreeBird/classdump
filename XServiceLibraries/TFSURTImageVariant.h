//
#ifndef TFSURTImageVariant_h
#define TFSURTImageVariant_h
@import Foundation;

@class NSObject, NSString;

@interface TFSURTImageVariant : NSObject { // (Swift)
    /* instance variables */
    B24@0:8@"NSString"16 palette;
}

@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) long long width;
@property (nonatomic, readonly) long long height;
@property (nonatomic, readonly) long long hash;

/* instance methods */
- (_Bool)isEqual:(id)equal;
- (id)init;

@end

#endif /* TFSURTImageVariant_h */
